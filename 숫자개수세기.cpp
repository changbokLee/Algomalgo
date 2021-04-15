#include <cstdio>
#include <algorithm>


  //Please Enter Your Code Here
using namespace std;
const int MAX = 10005;
int n, m;
int data[MAX];

int getStartPoint(int value){
    int start  ,end; //start는 항상  value 

    if(data[0] < value) start = 0;
    else {
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
        else
    

}

  int main() {
      scanf("%d %d" ,&n  ,&m);

    for(int i = 0; i<n; i++) scanf("%d" , &data[i]);

    sort(data , data+n);

    for(int i=0;i<m;i++){
        int a;
        scanf("%d" , &a);

        int front ,rear;

        front = getStartPoint(a);
        rear = getEndPoint(a);

    }
  return 0;
}