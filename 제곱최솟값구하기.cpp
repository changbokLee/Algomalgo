#include <stdio.h>

int main(){

int n;
scanf("%d" , &n);
for(int i=0; ;i++){  
    if(n<=i*i){
    printf("%d\n", i);
    break;

    }
   

}

    return 0;
}


/*내가 짠 코드

생각하지 못했던 부분 i값어덯게 설정할지고민했다. 그부분에서 막혔다.
#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int N;
  int M ;
  scanf("%d" , &N);
  for(int i = M; i>=N  ; i++){
    i = i*i;
    printf("%d",i)
  }
 

  return 0;
}

 */