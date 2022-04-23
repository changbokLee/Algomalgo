#include <stdio.h>

int main() {

/* 실수한거 i값이 아니라 number값으로 2를나누려햇다 
ㅋㅋㅋㅋㅋ
*/
  //Please Enter Your Code Here
  int number;
  scanf("%d" ,&number);
  int sum = 0;
     for(int i = 1; i<=number;i++)
      if(i%2 ==0){
        sum += i;
     }
      printf("%d\n" , sum);
  

  return 0;
}