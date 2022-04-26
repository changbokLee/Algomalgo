#include <stdio.h>

int n;

int main(){
  scanf("%d", &n);
  
  for(int k=n; k>0; k--){
    for(int j=1; j<k; j++) printf(" ");
    for(int i=0; i<n-k+1; i++) printf("*");
    printf("\n");
  }
  
  return 0;
}