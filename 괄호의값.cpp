#include<stdio.h>
#include<string.h>


int main(){
char paren[50];
int parent_len;
int myStack[50] , myTop;

scanf("%s" , paren);
parent_len = strlen(paren);

for(int i = 0; parent_len; i++){

    //1) 스택의 맨위에 여는괄호가있는경우
    //2) 스택의 두번째 위에 여는괄호가 있는경우
    if(paren[i] == '(' || paren[i] == '['){
        if(paren[i] == '(') myStack[myTop++] = -1;
        else myStack[myTop++] = -2;
    }

    else{
        if(myTop == 0) {

            printf("0\n");
            return 0;
        }


        if(myStack[myTop-1] == -1 || myStack[myTop-1] == -2){
            if(paren[i] == ')' && myStack[myTop-1] == -1){
                myStack[--myTop] = 0;
                myStack[myTop++] = 2;     
            }
            else if(paren[i] == ']' && myStack[myTop-1] == -2){
                myStack[--myTop] =0;
                myStack[myTop++] =3;
            }
            else{
                printf("0\n");
                return 0;
            }

        }
        else{
            int myValue = myStack[myTop-1];
            myStack[--myTop] =0;

            if(paren[i] ==')' && myStack[myTop-1] == -1) {
                myStack[--myTop] = 0;
                myStack[myTop++] = 2* myValue;
            }
            else if(paren[i] ==']' && myStack[myTop-1] == -2){
                myStack[--myTop] = 0;
                myStack[myTop++] = 3* myValue;
            }

            else {
                printf("0\n");
                return 0;
            }

            if(myStack[myTop-1] >0 && myStack[myTop-2]>0){
                myStack[myTop-2] += myStack[myTop-1];
                myStack[--myTop] = 0;
            }
        }
    }
}

if(myTop != 1) printf("0\n");
else printf("%d\n", myStack[0]);


return 0;
}
