// #include <stdio.h>
// //약수 k번째 갯수구하기 
// int main() {
//   int p,q;
//   int count =0;
//   int flag = 0;
//   scanf("%d %d" , &p , &q);
//   for(int i = 1; i<=p;i++){
//     if(p%q==0){
//     count++;
//       if(count==q){
//         printf("%d",i); //if문에 들어오면 해결이된건데 if문에들어오지않으면 해결이되지않은거다
//         flag =1;
//       }
//       // else if(count<q&& count!=q){
//       // printf("0");
//       if(flag ==0) 
//         printf("0\n");
    
//     }
    
//   }

  
  //Please Enter Your Code Here

//   return 0;
// }

#include <stdio.h>
//약수 k번째 갯수구하기 
int main() {
  int p,q;
  int count =0;
  int flag = 0;
  scanf("%d %d" , &p , &q);
  for(int i = 1; i<=p;i++){
    if( p%i == 0){
      count++;
      if(count==q){
        printf("%d",i); 
        flag =1;
      }
  
  } 
  }
      if(flag ==0) 
        printf("0");
    
    
  


  
  //Please Enter Your Code Here

  return 0;
}