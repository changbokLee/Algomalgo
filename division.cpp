#include <stdio.h>

int result[30];
int cnt;
int n;
// 0 1 2 3 4
// x x x x x
void  getResult(int mySum , int index){
//현재까지 구한합이  mysum
// 그리고 지금 , index번째 숫자를 결정할 차례 즉 result
    if(mySum == n){
        printf("%d" , result[0]);

        for(int i =0; i<index; i++){
            printf("+%d", result[i]);
        }
        printf("\n");
        cnt++;
    }

    else{
        int myNumber;
        if(index ==0) myNumber =n-1;
        else myNumber = n - mySum;
      

        for(int i = myNumber; i>=1; i--){
            result[index] = i;

            if(index >0 && result[index-1] < result[index]) continue;

            getResult(mySum+i , index+1);
        }
    }
}



int main() {

scanf("%d", &n);
getResult(0 , 0);

printf("%d\n" , cnt);


  return 0;
}