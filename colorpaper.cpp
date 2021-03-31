#include <stdio.h>

int main() {

  //Please Enter Your Code Here

  int n;
  int plane[101][101] ={0,};
  
  scanf("%d",&n);
  
  for(int i = 0; i<n; i++){
    int a, b, c, d;
    
    scanf("%d %d %d %d",&a ,&b ,&c ,&d );
    //a : 가로 b: 세로 c: 가로길이 
   //2 3, 2 5 j 
  
  for(int  j =b; j<b+d; j++){
    for(int k =a; k<a+c; k++){
      plane[j][k] = i+1;
    }
  }
  
  }
    
  


  return 0;
}