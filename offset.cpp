#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int arr[10][10];
  
  for(int i =1; i<=5; i++){
    for(int j =1; j<=5; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 0; i<=6; i++) arr[0][i] = 99;
  for(int i =0; i<=6; i++)arr[6][i] = 99;
  for(int i =0; i<=6; i++)arr[i][0] = 99;
  for(int i =0; i<=6; i++)arr[i][6] = 99;
  
  for(int i=1; i<=5; i++){
    for(int j = 1; j<=5; j++){
      if(arr[i-1][j] > arr[i][j]&&
        arr[i][j-1] > arr[i][j]&&
        arr[i][j+1] > arr[i][j]&&
        arr[i+1][j] > arr[i][j])printf("* ");
        else printf("%d " ,arr[i][j]);
    }
    
    printf("\n");
  }
  

  return 0;
}