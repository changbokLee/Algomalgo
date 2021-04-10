#include <stdio.h>



  //Please Enter Your Code Here
   int n,k;
   int arr[1000];

   
int main() {
   

   for(int i = 0; i<n; i++){
       scanf("%d" , &arr[i]);
   }

    for(int i = n-1; i>=1; i--){
       scanf("%d" , &arr[i-1]);
   }
  arr[0] = 0;
  for(int i = 0; i<n; i++){
       scanf("%d" , arr[i]);
   }
  return 0;
}


//1번부터 채우는게 아니라 n-1부터 채운다
// n-2번 인덱스에 있던값을 n-1번 인덱스에 채운다
// n-1 인덱스에 있었던값을 n-2번 인덱스에 채운다
// 위처럼 미는 방향의 반대방향으로 값을미는게아닌 ㅏㅇ겨오는 모양으로 처리하면 편하다