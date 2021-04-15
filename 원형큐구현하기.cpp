#include <stdio.h>

int main() {

  //Please Enter Your Code Here
    int myQueue[100] = {0,};
    int front =0 ,rear =0 ,numElemnet= 0;
    int n, m;

    scanf("%d %d" , &n ,&m);

    for(int i=0; i<m;i++){
        int a;

        scanf("%d" , &a);
    

    if(a ==1) {
        int b;
    

        scanf("%d" , &b);

    
    if(numElemnet >=n) printf("Overflow\n");
    else{
        myQueue[rear] =b;

        if(rear ==n-1) rear =0;
        else rear++;
        
        numElemnet++;
    }
}


else if(a ==2){
    if(numElemnet <=0) printf("Underflow\n");
    else{
        myQueue[front] = 0;

        if(front == n-1) front =0;
        else front++;

        numElemnet--;
    }
}


else{
    if(numElemnet <=0) printf("NULL\n");
    else printf("%d\n" , &myQueue[front]);
}
    }
  return 0;
}