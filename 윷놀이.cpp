#include <stdio.h>

/* 문제 
우리나라 고유의 윷놀이는 네 개의 윷짝을 던져서 배(0)와 등(1)이 나오는 숫자를 세어 도, 개, 걸, 윷, 모를 결정한다.
 네 개 윷짝을 던져서 나온 각 윷짝의 배 혹은 등 정보가 주어질 때 도(배 한 개, 등 세 개), 
 개(배 두 개, 등 두 개), 걸(배 세 개, 등 한 개), 윷(배 네 개), 모(등 네 개) 중 어떤 것인지를 결정하는 프로그램을 작성하라.

 문제 핵심: 배와 등을 카운팅해라 그리고 3번던져야하니 3번해라




*/
int main() {

  //Please Enter Your Code Here
  int A,B,C,D;
  int first ,second;
  scanf("%d %d %d %d", &A , &B ,&C ,&D);
  first = 0;
  second = 0;
  if(A == 0) first ++;
  if(B==0) first ++;
  if(C==0) first ++;
  if(D==0 )first ++;
  if(A==1)second ++;
  if(B==1) second ++;
  if(C==1) second ++;
  if(D==1) second ++;
  

  if(first ==1 && second ==3 )
    printf("A\n");
  else if(first ==2 && second ==2)
    printf("B\n");
  else if(first ==3 && second == 1)
    printf("C\n");
  else if (first ==4)
    printf("D\n");
  else if (second == 4)
   printf("E\n");
   
  scanf("%d %d %d %d", &A , &B ,&C ,&D);
  first = 0;
  second = 0;
  if(A == 0) first ++;
  if(B==0) first ++;
  if(C==0) first ++;
  if(D==0 )first ++;
  if(A==1)second ++;
  if(B==1) second ++;
  if(C==1) second ++;
  if(D==1) second ++;
  
  
  if(first ==1 && second ==3 )
    printf("A\n");
  else if(first ==2 && second ==2)
    printf("B\n");
  else if(first ==3 && second == 1)
    printf("C\n");
  else if (first ==4)
    printf("D\n");
  else if (second == 4)
   printf("E\n");
  
  scanf("%d %d %d %d", &A , &B ,&C ,&D);
  first = 0;
  second = 0;
  if(A == 0) first ++;
  if(B==0) first ++;
  if(C==0) first ++;
  if(D==0 )first ++;
  if(A==1)second ++;
  if(B==1) second ++;
  if(C==1) second ++;
  if(D==1) second ++;
   
  if(first ==1 && second ==3 )
    printf("A\n");
  else if(first ==2 && second ==2)
    printf("B\n");
  else if(first ==3 && second == 1)
    printf("C\n");
  else if (first ==4)
    printf("D\n");
  else if (second == 4)
   printf("E\n");

  return 0;
}