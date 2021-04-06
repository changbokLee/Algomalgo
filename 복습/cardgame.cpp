#include<stdio.h>

int main(){
int a_score[10] , b_score[10]; //10번입력

for(int i = 0; i<10; i++) scanf("%d", &a_score[i]); //입력값
for(int i = 0; i<10; i++) scanf("%d", &b_score[i]);

int a_cnt =0 ,  b_cnt = 0; //누가이기나 a,b
for(int i = 0; i<10; i++){
    int a = a_score[i];
    int b = b_score[i];

    if(a > b) a_cnt++;
    else if(a<b) b_cnt++;

}

if(a_cnt > b_cnt) printf("A\n");
else if(a_cnt < b_cnt) printf("B\n");
else printf("D\n");
    return 0 ;
}