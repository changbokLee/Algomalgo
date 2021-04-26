#include <stdio.h>

int getResult(int n, long long int m ){
    // n^m을 100007로 나눈 나머지를 반환하는함수
    if( m ==0) return 1;
    else {
       if(m %2 == 0) {
           int temp = getResult(n, m/2);
           return (temp * temp) % 10007;
       }
       else {
           // n^m = n^(m-1) * n
           int temp =getResult(n, m-1);
           return (temp *n) % 10007;
       }
    }
}
int main() {

  //Please Enter Your Code Here
  int n; 
  long long int m;
  scanf("%d %lld" , &n , &m);

  printf("%d\n" , getResult(n,m));

  return 0;
}

// n이 너무크다 int로는 안들어감.
//곱셈횟수를 줄여야한다.
// 1) 함수의 정의: 함수의 의미를 "말로"정의한다.
//2) 점화식: 나보다 작은함수는 값을 잘구한다고  이들을 이용해서 나를 구하기 위한
// 식을 적는다
// 3) 기저조건