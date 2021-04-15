#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int arr[5][5];

  for(int i=0; i<5; i++){
      for(int j =0; j<5; j++){
       scanf("%d" , &arr[i][j]);
      }
  }
int order= 0;
for(int i=0; i<5; i++){
      for(int j =0; j<5; j++){
       int a;

       scanf("%d", &a);
        order++;


for(int k=0; k<5; k++){
    for(int p=0; p<5; p++){
        if(arr[k][p]==a){
            arr[k][p]= -1;
        }
    }

}

int cnt =0;

for(int k=0;k<5;k++){
    int Xcnt =0;
    for(int p=0;p<5;p++){
        if(arr[k][p] == -1){
            Xcnt++;
        }
    }

    if(Xcnt ==5) cnt++;

}
for(int k=0;k<5;k++){
    int Xcnt =0;
    for(int p=0;p<5;p++){
        if(arr[p][k] == -1){
            Xcnt++;
        }
    }
    if(Xcnt ==5) cnt++;
}     
if(arr[0][0] == -1 && arr[1][1] == -1 && arr[2][2] ==-1 && arr[3][3]==-1&& arr[4][4]==-1)
      cnt++;
if(arr[0][4] == -1 && arr[1][3] == -1 && arr[2][2]==-1&& arr[3][1] ==-1&& arr[4][0]==-1)
 cnt++;

 if(cnt >=3){
     printf("%d\n",order);
     return 0;
 }
      }

}



          // 1) a의 위치
          // 2) a를 지워야함
          // 3) 몇개의줄이 지워졌는지 파악
          // 4) 3개이상의 줄이지워졌다면끄,ㅌ
      
  

  return 0;
}
