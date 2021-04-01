#include <stdio.h>

int main() {

  //Please Enter Your Code Here
  int n;
  int information[105][3]; //3인이유는 숫자 3개들어와서 0 1 2 스트라이크 볼 아웃
  int result = 0;

  scanf("%d" , &n);

  for(int i = 0; i<n; i++){
      scanf("%d %d %d" , &information[i][0] ,&information[i][1],&information[i][2]);
  }


for(int i = 1; i<=9; i++){
    for(int j=1;j<=9;j++){
        for(int k=1;k<=9;k++){
                        //ijk
            if(i !=j && j!=k && i!=k){
                bool flag =false;

                for(int p=0;p<n;p++){
                        // information[p]와 ijk가 조건을 만족하는지 체크
                    int first = information[p][0] /100;
                    int second = (information[p][0]/10) %10;
                    int third = information[p][0]%10;

                    int strike =0, ball =0;

                    if(first ==i) strike++;
                    if(second ==j) strike++;
                    if(third ==k) strike++; //3개다 모두확인해야하기때문에 elseif는안됌


                    if(i  == second || i ==third) ball++;
                    if(j  == first || j ==third) ball++;
                    if(k  == first || k ==second) ball++;

                    if(information[p][1] !=strike || information[p][2] !=ball)
                     flag = true;

                    
                }

                if(flag == false) 
                    
                    result++;
                
            }  
        }
    }   
}

    printf("%d\n" ,result);
  return 0;
}