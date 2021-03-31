#include <stdio.h>

int main() {

  //Please Enter Your Code Here

  int n;
  int student[1005][5];
  int result = -1, resultNumber = 0;
  
  scanf("%d" , &n);

  for(int i=1; i<=n; i++){
    for(int j =0;j<5;j++)
      scanf("%d",&student[i][j]);
  }
    
   for(int i =1; i<=n;i++){
     // i번 학생에 대해서, 겹치는 학생의 숫자를 구한다.
    
    int numStudent = 0;
   
    for(int j=1; j<=n; j++){
     // i와 j 가 같은 반이었던 적이있었는지 판별한다

     if(i == j) continue;

     if(student[i][0] == student[j][0]||
        student[i][1] == student[j][1]||
        student[i][2] == student[j][2]||
        student[i][3] == student[j][3]||
        student[i][4] == student[j][4])
            numStudent++;
     
   }
   
   if(result <numStudent){
     result = numStudent;
     resultNumber = i;
   }
  }

   printf("%d\n" ,resultNumber);
   
//1 ->3 2 >4 3>2 4=>4 5>3
  return 0;
}


// i번째 학생과 겹치는 확생수구하기
// 한번이라도 겹치는 적이있는학생을구한다.
//student[i] => i번학생의 반 정보