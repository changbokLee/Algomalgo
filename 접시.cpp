#include <stdio.h>
#include <string.h>



int main() {

  //Please Enter Your Code Here
int result[60] , resultLen =0;
bool flag =false;
char data[30];
int len;
char myStack[30];
int myTop = 0;
int cursor =0;
char curAlpha = 'a';

scanf("%s" ,data); //bacd
len = strlen(data);


// abcd
while (1)
{
    char topElement;
    
    if(myTop ==0) topElement = 0;
    else topElement = myStack[myTop -1];
    

    char currrentElement = data[cursor];

    if(topElement == currrentElement){
        myStack[myTop-1] =0;
        myTop--;

        result[resultLen] =0;
        resultLen++;

        cursor++;


    if(cursor >=len){
        flag = true;
        break;
    }
}

else {
    if(curAlpha >= 'a ' +len){
    flag =false;
    break;
    

    }
    myStack[myTop] = curAlpha;
    myTop++;

    result[resultLen] =1;
    resultLen++;
    curAlpha++;
}

}



if(flag == true){
    for(int i =0;i<resultLen;i++){
        if(result[i] ==0) printf("pop\n");
        else printf("push\n");    
}

}
else printf("impossible\n");




  return 0;
}

//push를 언제하고 pop을 언제해야하나
// 1)스택내가필요한거 pop 2)아닐때 push
// pop 스택의맨위가 지금 꺼내야할떄