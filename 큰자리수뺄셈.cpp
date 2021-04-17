#include <stdio.h>
#include <string.h>

int main() {

  //Please Enter Your Code Here
  char temp[105];
  bool flag = false;
  int first[105] ={0,} ,second[105] = {0,};
  int big[105] = {0,} , small[105] = {0,};
  int result[105] = {0,};
  int bigLen, smallLen;
  int firstLen , secondLen;
 

  // temp: '1 2 3  4
  // 49
  // first: 101 1 102 2 103 3 104 4

  scanf("%s",temp);
  firstLen  = strlen(temp);
  for(int i =0; i<firstLen; i++) first[104-firstLen+i+1] =temp[i] -'0';
  

  scanf("%s",temp);
  secondLen = strlen(temp);
  for(int i =0; i<secondLen; i++) second[104-secondLen+i+1] =temp[i]-'0';
  

  int compare = -1; // 0 if first가 더크다면 , 1 if second가 더크다
  
  if(firstLen > secondLen) compare = 0;
  else if(firstLen < secondLen) compare =1;
  else {

    for(int i =0; i<105; i++){
      if(first[i] > second[i]){
        //112
        //131
        compare =0;
        break;
      }
    else if(first[i] < second[i]){
     compare =1;
     break;
    }
    }

  }

   if(compare ==0){
    for(int i = 0; i<105;i++) big[i] = first[i];
    for(int i = 0; i<105;i++) small[i] = second[i];
    bigLen = firstLen;
    smallLen = secondLen;


    
  }

  else if(compare ==1){
    for(int i = 0; i<105;i++) big[i] = second[i];
    for(int i = 0; i<105;i++) small[i] = first[i];

    bigLen = secondLen;
    smallLen = firstLen;

    flag = true;
  }

else {
  printf("0\n");
  return 0;
}
  
  for(int i =104; i>=0;i--){
    if(big[i] >= small[i]) result[i] = big[i]- small[i];
    else{
      big[i-1]--;
      big[i] +=10;

      result[i] = big[i] - small[i];
    }
  }
if(flag == true) printf("-");

for(int i =0; i<105;i++){
    if(result[i] != 0) {  

    for(int j =i;  j<105;j++) printf("%d" ,result[j]);
    printf("\n");


    return 0;

    }
}

  // first 와 second의 대소비교  큰수에서 작은수를 뻄 출력
  //큰수에서 작은수를 뺌 ㅋㅋ

  return 0;
}