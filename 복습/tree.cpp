#include <stdio.h>

int getGCD(int a, int b){
    while (1)
    {
        int c= a % b;
        if(c==0) return b;
        a = b;
        b = c;
    }
    
}




int main() {

  //Please Enter Your Code Here
  int n;
  int tree[10005];
  scanf("%d" , &n);
  for(int i=0; i<n; i++) {scanf("%d" ,  &tree[i]);}

  int GCD =0;
  for(int i=0; i<n-1;i++){
      //tree[i] ~ tree[i +1] 의 거리를 고려함
      int distance = tree[i+1] - tree[i];

      if(i ==0)GCD = distance; 
      else GCD = getGCD(GCD, distance);

  }


  int totalTreeCnt = ((tree [n-1] -tree[0]) / GCD) + 1;

  printf("%d\n" , totalTreeCnt-n);

  

  return 0;
}