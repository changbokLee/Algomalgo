#include <stdio.h>

int main() {

    int r = 0, ry ,rx;
  //Please Enter Your Code Here
  for(int i=1; i<= 9; i++){
      for(int j = 1; j<=9;j++){
          int a;
          scanf("%d" , &a);
      
      if(r<a){
          r =a;
          ry =i;
          rx =j;
      }
      else if (r ==a){

          if( i < ry || (ry ==i && j <rx)){
            ry =i;
            rx =j;

          }
        
      }
      }
  }

  printf("%d\n", r);
  printf("%d %d\n" ,ry ,rx);


  return 0;
}