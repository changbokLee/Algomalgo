#include <stdio.h>
// n = 10
// 1~10
int main() {
  int n =1;
  int cnt=0;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    if(n%i==0) cnt++;
  }    
  if(cnt==2) printf("YES");
  else printf("NO");
  //Please Enter Your Code Here
  return 0;
}