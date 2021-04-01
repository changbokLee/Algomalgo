#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n ,s ;
  scanf("%d %d" , &n , &s);
  
  int space = n-1,number =1; 
  int preveiousFirst;
  
  for(int i =1; i<=n; i++){
    //1)공백을 출력
    //2)숫자들을 출력
    for(int j=0; j<space; j++)printf(" ");
    space--;
    
    if(i % 2 == 0){ // 짝수줄 증가하면서 출력
      int currentFirst = preveiousFirst + 1;
      if(currentFirst >= 10)currentFirst = 1;
      
      for(int j=0; j<number;j++){
        printf("%d", currentFirst);
        preveiousFirst = currentFirst;
        currentFirst +=1;
        if(currentFirst>=10) currentFirst =1;
      } 
    }
    
    
    else{ //홀수줄  감소하면서 출력
      int currentFirst; 
      
      if(i ==1) currentFirst =s;
      else{
      currentFirst= preveiousFirst;
      
      for(int j=0; j<number; j++){
        currentFirst +=1;
        if(currentFirst >= 10) currentFirst = 1;
      }
        }
      
      
      preveiousFirst = currentFirst;
      
      for(int j= 0; j<number; j++ ){
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