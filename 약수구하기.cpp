#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int k;
  int cnt =0;
  scanf("%d %d", &n ,&k );
  for(int i=1; i<=n; i++){
    if(n%i ==0){
      cnt++;
    if(cnt==k){
      printf("%d", i);
    }
    }
    
    
  }
    if (cnt<k){
      printf("0");
  }

  return 0;
}

// 약수구하기 피드백 1. 왜헤맸는가? 약수를 구하는걸 어렵게생각함 문제를 잘못읽음 2. 아직부족한게뭔가 변수의개념..