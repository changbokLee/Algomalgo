#include <stdio.h>

int main(){

    int n, m ;
    scanf("%d %d" , &n , &m);
    printf("%d\n",getPower(n,m));

    return 0;




}

    int getPower(int n , int m){
        if(m=0)
            return 1;
        else
            return getPower(n,m-1)*n;
    }

    

//get power(n,m) = nm 을반환하는함수 정의
//get power(n,m)= getpower(n,m-1 )xn 기저조건
//getpower = 제대로동작한다는가정하고 시작


