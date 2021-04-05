#include <stdio.h>


  const int MAX = 105;
  int n, r;
  char result[MAX]; // for 문할때 담아둘게 필요함
  bool check [MAX]; //check ==true i가 이미 나왔음
  void getResult(int x){
      //x번째 for문을 돌려야함

      if(x >=r){
          printf("%s\n",result);      
          }
        else{
            for(int i=0;i<n;i++){
                char alpha = i +'a';
                if(check[i] == false){
                    result[x] = alpha;
                    check[i] = true;
                    getResult(x+1);
                    // x번째에 i 를넣는 모든경우를 이미 다고려했음.
                    check[i] = false;
                    result[x] = 0;
                }
            }
        }
  }
  

  int main() {
      scanf("%d %d " , &n , &r);
      getResult(0);
  return 0;
}