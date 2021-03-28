int main() {

  //Please Enter Your Code Here

  
  int a_score[10] ,  b_score[10];
  
  for(int i=0; i<10; i++) scanf("%d",&a_score[i]);
  for(int i=0; i<10; i++)scanf("%d", &b_score[i]);
  
  int a_cnt =0 ,  b_cnt =0;
  
  for(int i =0; i<10;i++){
    int a = a_score[i];
    int b = b_score[i];
    
    if(a>b) a_cnt++;
    else if(a<b) b_cnt++;
    
  }
  
  if(a_cnt > b_cnt) printf("A\n");
  else if (a_cnt < b_cnt) printf("B\n");
  else printf("\D");
  
  return 0;
  
}

//나눠서 생각해보기
//각라운드별로 a와 b카드를 알수있어야하기때문에 => 배열로했다
// scanf f로 받아준다 따로 만들려했는데 ...흠...라운드 10횟수는 for문으로
// 라운드를 따로 뺄수있나. 
// 문제를 볼때 배열을 써야할때가있나..