#include <stdio.h>

int n;
int data[100005];

int getResult(int start , int end){
  //data의 start ~end 까지 고려했을때의 연속부분의 최대합
  if(start == end){
    return data[start];
  }  
  int mid = (start + end) /2;

  int leftMax = getResult(start, mid);
  int rightMax = getResult(mid+1 , end);

  int leftSubMax = data[mid];
  int rightSubMax = data[mid+1];

  int leftSubSum = data[mid];
  int rightSubSum = data[mid+1];

  for(int i = mid-1; i>=start; i--){
    leftSubSum += data[i];
    if(leftSubMax < leftSubSum)
      leftSubMax = leftSubSum;
  }

  for(int i =mid+2; i<=end; i++){
    rightSubSum += data[i];
    if(rightSubMax <rightSubSum)
      rightSubMax = rightSubSum;
  }

  int middleMax =leftSubMax +rightSubMax;

  if(leftMax >= rightMax && leftMax >= middleMax) return leftMax;
  else if(rightSubMax >= leftMax && rightSubMax >= middleMax) return rightMax;
  else return middleMax;
}



int main() {

  //Please Enter Your Code Here
    scanf("%d" ,&n);

    for(int i =0; i<n;i++)scanf("%d" , &data[i]);
        printf("%d\n" ,getResult(0,n-1));

  return 0;
}

// 어떤경우를 고려하지않았는가 경계를포함하는경우
// 고려하지않은 부분을어떻게 고려할것인가.
//1) 왼쪽 연속부분 최대합을 구한다 2) 오른쪽 연속부분 최대합을 구한다 3) 경계포함 연속부분 최대합을 구한다
