#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int a ,b ,c;
  scanf("%d %d %d" , &a , &b ,&c);
  if (a > b && a > c) printf("%d", a);
  else if (b > a && b > c) printf("%d",b);
  else if (c > a && c > b) printf("%d",c);
  
  else if (a >b && a == c) printf("%d", a);
  else if (a >c && a == b) printf("%d", a);
  else if (b >a && b == c) printf("%d", b);
  else if (b >c && b == a) printf("%d", b);
  else if (c >a && c == b) printf("%d", c);
  else if (c >b && c == a) printf("%d", c);
  
  else if ( a== b && b ==c ) printf("%d" , a);


  

  return 0;
}