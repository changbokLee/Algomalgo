#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int a, b;
  int A,B;
  scanf("%d %d", &a ,&b);

  A = a;
  B = b;

  while (1) {
      int c=  a%b;
      if(c ==0) break;

      a = b;
      b = c;

  } 

  int GCD = b;
  int LCM = GCD * (A/GCD) *(B/GCD);

  printf("%d\n %d\n",GCD,LCM);
 

  return 0;
}


//유클리드호제법으로 최대공약수구하고 최소공배수를 구하면된다. 접근은그렇게하라