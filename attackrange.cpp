#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int y, x ,c;
  int arr[105][105] ={0,};

  scanf("%d" , &n);
  scanf("%d %d %d" , &y ,&x ,&c);

  for(int i =1; i<=n; i++){
      for(int j=1; j<=n; j++){
          // 1)(i j)(y x) 까지의 거리를구함
          // 2)이 거리가  c안에 들어오는가
          int first = i -y;
          int second = j - x;

          if(first <0) first *= -1;
          if(second <0) second *= -1;
          
          int dist = first + second;
          
          if(dist ==0) arr[i][j] = -1;
          else if(dist <=c) arr[i][j] = dist;
          
      }
  }

  for(int i = 1; i<=n; i++){
      for(int j =1;j<=n; j++){
          if(arr[i][j] == -1) printf("x ");
          else printf("%d ",arr[i][j]);
      }
    printf("\n");

     
  }


  return 0;
}


//거리를 어떻게 구하는가?
// 출력을 어떻게하는가?