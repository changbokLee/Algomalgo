#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int A , B;
  scanf("%d  %d " , &A , &B );
  if (A-B < 0) {
    printf("%d - %d : %d" , -1);
  }
  else {
    printf("%d - %d : %d" , A , B , A-B);
  }
  return 0;
}