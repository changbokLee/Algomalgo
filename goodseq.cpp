#include <stdio.h>

int result[100] , resultLen;
int n;
bool isFinished = false;

bool isPossible(int x, int length ){
    for(int i=0;i<length;i++){
        if(result[x-i] != result[x-i-length])
        return true;
    }
 //reulst[x]가 오른쪽끝이고 길이 length 중복이있는지 판별 true 아니면 false
        return false;
}


void getResult(int x){
    if(isFinished == true) return;

    if(x >=n){
        for(int i = 0; i<n; i++)  printf("%d" , result[i]);
        printf("\n");

        isFinished = true;
        return;
    }

    for(int i =1;i<=3;i++){
        result[x] = i;

    bool flag =false;
    for(int j=1;j<=(x+1)/2;j++){
        if(!isPossible(x, j)){
            flag =true;
            break;
        }
    }
    if(flag == false){
        getResult(x+1);
    }
    }
}
int main() {

    scanf("%d" , &n);
    getResult(0);
  //Please Enter Your Code Here

  return 0;
}


  //result[x]를 결정한 후 ,  result[x+1] 로 부터 결정해 나가는 함수
    //result [x]~ result[n-1] 까지 결정하는 함수

    // 1) x번째 숫자를 결정한다
    // 2) x+1번째 숫자를 결정하러간다

    // 0 1 2 3 4 5 6 7
    // 1 2 1 3 1 2 3 1

    //1을 넣어본다 괜찮읁 ㅣ확인한다 괜찮다면 getresult
    // 2을 넣어본다 괜찮은지 확인하다