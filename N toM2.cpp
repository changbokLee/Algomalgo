#include <stdio.h>

int main() {
    
/*내가 놓친것 8개이후에 16개거나 이러면 또 줄띄우기를해야하는데 그런섬세한거를 놓쳣다..9를출력하고나면 cnt가1이되어야한다.*/
  //Please Enter Your Code Here
  int N,M;
  int count = 0;
  scanf("%d %d" , &N ,&M);
  for(int i=N; i<=M;i++){
    printf("%d " , i);
    count++;
  if(count == 8){
    printf("\n");
     count =0; //count가 다음줄로갈때 비어있다. 내가출력해야하는줄은 비어있기때문에 0으로되었다.
  }
  }

  return 0;
}

