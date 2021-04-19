#include<stdio.h>

// i)x의모든 조상이누구인가
// i)y의모든 조상이누구인가가
// 그중제일 가까운 조상이누구인가
// 두번색칠된친구들은 공통조상이겠구나.
// 두정점이 주어졌을때알수있다. =>그중에 가장가까운 공통조사을찾아야한다.


int main(){
    bool color[1005] = {0,}; //color가 true라면 x색칠되어잇음
    int parent[1005] = {0,}; //정점 x의부모노드
    int n;
    int X, Y;
    scanf("%d %d %d" , &n ,&X ,&Y);
    for(int i = 0; i<n+1; i++){
        int a, b;
          scanf("%d %d",  &a , &b);

          parent[b] =a;

    }

    while(1){
        color[X] = true;
        if(X== 0) break;
        X = parent[X];
    }

    while (1){
        if(color[Y] == true){
            printf("%d\n", Y);
            return 0;
        }

        color[Y] = true;
        Y =parent[Y];

    }
    

    // 1) x의 모든조상을 구한다.
    //  2) y의 모든 조상을 색칠한다.
    // 만약 이미 조상체크가 되어있다면, 
    // 이조상을 출력하고 끝낸다.
    return 0;
}