#include <stdio.h>

int main() {

  //Please Enter Your Code Here


int myStack[105], myTop= 0;
int n , m;

scanf("%d %d " , &n, &m);

for(int i =0;i<m;i++){
    int a;

    scanf("%d" , &a);

    if(a==1){
        int b;

        scanf("%d" , &b);

        if(myTop >=n) printf("Overflow\n");
        else myStack[myTop++] = b;

    }
    else if(a ==2){
        if(myTop ==0)printf("Underflow\n");
        else myStack[--myTop] =0;
    }

    else{
        if(myTop ==0) printf("Null\n");
        else printf("%d\n" , myStack[myTop-1]);
    }
}
  return 0;
}