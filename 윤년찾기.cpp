#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int N;
  scanf("%d", &N);
  if(N%4 == 0 && N%100 !=0 || N%400 == 0 )
    printf("YES");
  else
    printf("No");
  return 0;
}