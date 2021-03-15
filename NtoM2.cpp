#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  
  int N;
  int M;
  scanf("%d %d", &N ,&M );
  int cnt=0;
  for(int i = N; i<=M; i++ ){
     printf("%d ", i);
     cnt++;
    if(cnt%8==0){
      printf("\n");
    }
     
  }
  
  
  return 0;
}

/* 피드백내용 변수를사용해라  생각해봐야 할내용 
1. n부터 m까지 범위설정 
부족했던부분 조건문에 2번째문은 보통범위로생각하는데 범위가 아니라 if조건문처럼 조건이라생각해야한다
2. 출력8개부분을 해야한다
8개부분을 할때 if문을사용하여 cnt변수를 이용해서 했다 변수를 이용할줄아는 습관을 길러라!

*/