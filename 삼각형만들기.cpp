#include <stdio.h>

int main() {
//띄어쓰기는 그 별표값이랑같아야 나이스하다그러하다!아무튼그러하다
  //Please Enter Your Code Here
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
       printf("*");
    }
      printf("\n");
    }
 

  return 0;
}