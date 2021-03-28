#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int result =0;
  int n;
  scanf("%d", &n);
  for(int i = 0; i<n; i++){
    int a, b ,c ;
    
    scanf("%d %d %d " , &a ,&b ,&c);
  
  
  int r;
  if(a == b && b==c){
    r = 10000 + 1000 *a ;
    
  }
  
  else if(a ==b && b !=c ){
     r =1000+ 100 * a;
  
  }
  
  else if(a ==c && b !=c ){
     r =1000 + 100 * a;
  
  }

  else if (b ==c && a!=b){
    r =1000 + 100*b;
  }

  else {
    if(a >b && a>c ) r = 100 *a;
      else if(b >a && b>c )r = 100* b;
      else r = 100*c;
  }

  if(result <r){
    result = r;
  }
}
  printf("%d\n",result);

  return 0;
}