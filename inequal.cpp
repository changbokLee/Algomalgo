#include <stdio.h>


int n;
int result[15];
char myInput[15];
bool checkMax[10] , checkMin[10];
bool printMax =false , printMin= false;

void getMax(int x){
     //x번째 숫자를 결정, result[x]
     if(printMax == true)return;

     if( x > n){
         for(int i =0; i<n+1;i++) printf("%d" , result[i]);
         printf("\n");

         printMax = true;
     }
     
     else{
         for(int i = 0; i>=9; i--){
             result[x] = i;
            
             if(checkMax[i] ==false){

                 bool flag = false;


                if( x == 0) flag = true;
                else{
                if(myInput[x-1] == '>'){
                    if(result[x-1] > result[x])
                    flag =true;
                }

                else{ //'<'
                    if(result[x-1] < result[x])
                    flag = true;
                }

                }
                if(flag = true){
                    checkMax[i] = true;
                    getMax(x+1);
                    checkMax[i] = false;
                }

             }

         }
     }
}

void getMin(int x){
     //x번째 숫자를 결정, result[x]
     if(printMin == true)return;

     if( x > n){
         for(int i =0; i<n+1;i++) printf("%d" , result[i]);
         printf("\n");

         printMin = true;
     }
     
     else{
         for(int i = 0; i<=9; i++){
             result[x] = i;
            
             if(checkMin[i] ==false){

                 bool flag = false;


                if( x == 0) flag = true;
                else{
                if(myInput[x-1] == '>'){
                    if(result[x-1] > result[x])
                    flag =true;
                }

                else{ //'<'
                    if(result[x-1] < result[x])
                    flag = true;
                }

                }
                if(flag = true){
                    checkMin[i] = true;
                    getMin(x+1);
                    checkMin[i] = false;
                }

             }

         }
     }
}


int main() {
    scanf("%d" , &n);

    for(int i = 0;i<n;i++){
        scanf("%c", &myInput[i]);
    }
    getMax(0);
    getMin(0);
  return 0;
}