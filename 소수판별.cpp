// #include <stdio.h>

// int main() {

//   //Please Enter Your Code Here
//   int n;
//   int flag =0;
//   scanf("%d",&n);
//   for(int i=0; i<=n;i++){
//     if(i%n== 1)
//       printf("YES");
//       flag =1;
  
//     if(flag ==0)
//       printf("NO");
    
//   }

//   return 0;
// }

#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int flag =0;
  scanf("%d",&n);
  for(int i=2; i<=n-1;i++){
    if(n%i== 0){
      printf("NO");
      flag =1;
      break;
    }
  }
    if(flag == 0)
      printf("YES");
 
  

  return 0;
}