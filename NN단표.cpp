#include <stdio.h>

// 1234 2458 36912 47 12 6   12? < 13개
int n;
long long int k; //longlong 한이유 : 범위때문에
long long int getorder(long long int x) {
  // x가 몇번째인지 반환하는 함수
  // x가몇번쨰인지 반환하는함수
   long long int result = 0;

  for(int i =1;i<=n; i++){
    if(i*n <x) result +=n;
    
    else{ 
    if(x *i ==0)result += (x/i)-1;
      else result += x/i;
   }
  }

return result+1;

}
int main(){
  scanf("%d %lld" ,&n ,&k);
  

 long long int start =1, end= n*n+1;

  while(start+1 < end){
    // start: g항상 정답이되는 숫자보다 작거나 같은숫자
    // end: 항상정답이 되는 숫자보다 큰 숫자

    // start 12 end 13

   long long int mid =(start +end ) /2;
   long long int myOrder = getorder(mid);



 if (myOrder <= k) start = mid;
    else end = mid;

   

  }

  printf("%lld\n" , start);

  return 0;
}


// 1 2 3 4 
// 2 4 6 8
// 3 6 9 12
// 4 8 12 16 k=8


// 1 2 2 3 4  4 4 6 6  8 8 9 12 12 16
// n*n => o(n2) + O(Nlogn2)