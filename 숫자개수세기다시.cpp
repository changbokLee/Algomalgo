#include <cstdio>
#include <algorithm>


using namespace std;
const int MAX = 100005;
int n, m;
int data[MAX];

int getStartpoint(){



}



int getEndPoint(){



}


int main() {
      scanf("%d %d" ,&n  ,&m);

    for(int i = 0; i<n; i++) scanf("%d" ,&data[i]);

    sort(data , data+n);

    for(int i=0;i<m;i++){
        int a;
        scanf("%d" , &a);

        int front ,rear;

        front = getStartPoint(a);
        rear = getEndPoint(a);

        if(front == -1) printf("0\n");
        else printf("%d\n" ,rear-front+1);

        

    }

    return 0;
}