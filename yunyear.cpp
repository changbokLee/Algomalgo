#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int N;
  scanf("%d" , N <=5000);
  if(N%4 ==0  && N%100 != 0 || N%400 == 0) printf("%d" , "yes");
  else  printf("%d" ,"No");
  return 0;
}

// 런타임 에러나는데 왜그러는지