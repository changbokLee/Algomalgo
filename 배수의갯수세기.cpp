#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int A,B,C;
  int count;
  scanf("%d %d %d" ,&A , &B ,&C);
  //temp변수로해서 값을바꿀생각을못했다. 이부분에 대해서 다시
  if(A>B){
    int temp =A;
    A =B;
    B= temp;
  }
  for(int i =A; i<=B ; i++){
    if(i%C ==0){
      count++;
    }
  }
  
  printf("%d",count);

  return 0;
}