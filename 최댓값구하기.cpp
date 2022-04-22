#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int a ,b ,c ;
  scanf("%d %d %d" , &a , &b ,&c);
  if(a >=b && a >= c)
    printf("%d",a);
  else if(b >=a && b >= c)
    printf("%d",b);
  else if(c >=a && c >= a)
    printf("%d",c);
  

  return 0;
}