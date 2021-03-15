#include <stdio.h>
int main() {
  int A;
  int B;
  int C;
  scanf("%d %d %d", &A, &B, &C);
  int cnt = 0;
  // A는 무조건 작은수!
  // B는 무조건 같거나 큰수!
  // temp  A   B
  // 10    3   10
  if(A>B){
    int temp = A;
    A = B;
    B = temp;
  }
  for(int i =A; i<=B; i++ ){
    if(i%C ==0){
      cnt++;
    }
    // cnt++;
  }
  printf("%d",cnt);
  // 3 9 2
  // 3 4 5 6 7 8 9 중에서
  // 2의 배수를 찾는다.
  //Please Enter Your Code Here
  return 0;
}