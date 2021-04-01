#include <stdio.h>

int main() {
    int arr[8][8];
    int rookY[2] , rookX[2] , rookCnt =0;

  //Please Enter Your Code Here
    for(int i =0; i<8; i++){
        for(int j=0;j<8; j++){
            scanf("%d" , &arr[i][j]);
           
           
            if(arr[i][j] ==2){
                // rook o roox o 첫번째 발견되는룩
                // rooky 1 roo x 1  두번째 발견되는 룩의 좌푠
                rookY[rookCnt] = i;
                rookX[rookCnt] = j;

                rookCnt++;
            }
        }
    }

    bool flag = false; //잡을 수 없다면 false ,  잡 을 수있다면 true
    
    for(int k=0; k<2; k++){
      int ry = rookY[k] , rx = rookX[k];
  
      for(int i= rx+1; i<8;i++){
          if(arr[ry][i] ==1) flag = true;
          else if(arr[ry][i] ==3)break;
      }
  
      for(int i =ry-1; i>=0; i--){
          if(arr[i][rx]==1) flag =true;
          else if(arr[i][rx] ==3) break;
      }
  
      for(int i =rx-1; i>=0; i--){
          if(arr[ry][i] ==1 )flag =true;
          else if(arr[ry][i] ==3) break;
      }
    
  
    for(int i =ry+1; i<8; i++){
          if(arr[i][rx] ==1 )flag =true;
          else if(arr[i][rx] ==3) break;
      }
    }
  
      if(flag ==true) printf("1\n");
      else printf("0\n");
  
    return 0;
}


//하나의룩이 하나의킹을 잡을 수 있느냐=>접근방법   근데 룩에 장애물이있으면 어려운데 
// 가장 단순한 방법은 룩의 모든좌표를 다찍어보면된다.

//1)룩 1에게 킹을 잡을 수있는지 물어보기  yes or no
//2) 룩2에게 킹을 잡을 수있는지 물어보기 yes or no