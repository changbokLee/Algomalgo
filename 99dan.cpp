#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int i =0;
  scanf("%d" , &n);
  for(int k = 0; k<9; k++){
     i = i+1;
     printf("%d*%d=%d\n" , n , i ,n*i);
  }
  


  return 0;
}