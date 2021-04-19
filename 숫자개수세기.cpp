#include <cstdio>
#include <algorithm>

// s:항상3보다 작은값
// e 항상3보다 크거나같은값
  //Please Enter Your Code Here
using namespace std;
const int MAX = 10005;
int n, m;
int data[MAX];

int getStartPoint(int value){
    int start  ,end; //start는 항상  value 보다 작은값을가리킨다

    if(data[0] < value) start = 0; //end는 항상 value qhek zmrjsk rkxdmsrkqtdmfrkflzlsek.
    else { // 3456789 
        if(data[0] > value) return -1;
        else return 0;
    }

     if(data[n-1] >=value) end = n-1;
        else return -1;

    while(start+1 <end){
        int mid = (start +end) /2;

        if(data[mid] < value) start = mid;
        else end = mid;
           
        }

        if(data[end] == value) return end;
        else return -1;
    

}

  int getEndPoint(int value){
      int start , end;

    if(data[0] <= value) start = 0;
    else return -1;


    if(data[n-1] >value) start = n-1;
    else{
      if(data[n-1] <value) return -1;
      else return n-1;

    }
    while (start+1 < end)
    {
      int mid = (start +end) /2;

      if(data[mid] <= value) start = mid;
      else end = mid;

    }
    
    if(data[start] == value) return start;
    else return -1;
  }

  int main() {
      scanf("%d %d" ,&n  ,&m);

    for(int i = 0; i<n; i++) scanf("%d" ,&data[i]);

    sort(data , data+n);

    for(int i=0;i<m;i++){
        int a;
        scanf("%d" , &a);

        int front ,rear;

        front = getStartPoint(a);
        rear = getEndPoint(a);

        if(front == -1) printf("0\n");
        else printf("%d\n" ,rear-front+1);

        

    }
  return 0;
}