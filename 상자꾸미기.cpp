#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int cnt[1005] = {0,};//색깔에 갯수 배열로 잡아서 했다, 0~1004를 0으로 초기화해라 cnt[1]~2345
  scanf("%d", &n);
  
  for(int i= 0; i<n; i++){
    int a;
    scanf("%d" , &a);
    
    cnt[a]++;
  }
  
  //갯수세는코드
  
  // 1 1 5 1 4 3
  
  int validColor = 0;
  
  for(int i = 1; i<=n; i++){
    //i번색깔은 몇개 쓰나
    // 0개 -> 0
    //1개 -> 11개
    if(cnt[i] <2 )validColor += cnt[i];
    else validColor +=2;
  }
 
  if(validColor>=6)printf("Yes\n");
  else printf("No\n");
  

  return 0;
}