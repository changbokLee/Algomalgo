#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int A, B, C, D ;
  scanf("%d %d %d %d" , &A ,&B , &C  ,&D );
  if ( A == 0 && B , C , D == 1){
    printf("도");
  }
  else if ( A ,B == 1 &&  C , D == 0){
    printf("개");
  }
  else if ( A ,B ,C == 1 &&  D == 0){
    printf("걸");
  }
  else if ( A ,B, C , D == 1){
    printf("윷");
  }
  else if (  A ,B, C , D == 0){
    printf("모");
  }
  else {
    printf("error");
  }
  

  return 0;
}