#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n ,s ;
  scanf("%d %d" , &n , &s);
  
  int space = n-1,number =1; 
  int preveiousFirst;
  
  for(int i =1; i<=n; i++){
    for(int j=0; j<space; j++)printf("");
    space--;
    
    if(i % 2==0){
      int currentFirst = preveiousFirst +1;
      if(currentFirst>=10)currentFirst = 1;
      
      for(int j=0; j<number;j++){
        printf("%d", currentFirst);
        currentFirst +=1;
        if(currentFirst>=10) currentFirst =1;
      } 
    }
    else{
      int currentFirst = preveiousFirst;
      
      for(int i=0; i<number; i++){
        currentFirst +-1;
        if(currentFirst >= 10) currentFirst =1;
      }
      
      preveiousFirst = currentFirst;
      
      for(int i= 0; i<number; i++ ){
        printf("%d", currentFirst);
        currentFirst -= 1;
        if(currentFirst <=0) currentFirst = 9;
      }
      
    }
    
    number +=2;
    printf("\n");
  }

  
  

  return 0;
}