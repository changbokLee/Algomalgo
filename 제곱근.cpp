#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int N;
  scanf("%d", &N);
  for(int i = 0; i<=N; i++){
    if(i*i>=N){
      printf("%d" ,i );
      break;
    }
    
  }
// N입력값 , 비교는 s2 출력값은 s
  return 0;
}


int main() {

  //Please Enter Your Code Here
  int N;
  int s = 0;
  scanf("%d", &N);
  for(int i = 0; i<=N; i++){
    if(s*s>=N){
      printf("%d" ,s );
      break;
    }
    s++;
    
  }

  return 0;
}

//피드백 1. 브레이크문을 안씀 . 한번만출력하고싶으면 반복문에서 브레이크문만하셈 !



