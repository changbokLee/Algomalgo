#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

const int MAX = 30;

int dy[4] = {-1, 0, 0, 1};
int dx[4] = {0, 1, -1, 0};
int n;
int Map[MAX][MAX];
vector <int> result;

struct p {
    int y;
    int x;
};

p make_p(int y, int x) {
    p temp;

    temp.y = y;
    temp.x = x;

    return temp;
}

int getGroup(int y, int x) {
    queue <p> Queue;

    Queue.push(make_p(y, x));

    int cnt = 0;

    Map[y][x] = 0;
    cnt++;

    while(!Queue.empty()) {
        p front = Queue.front();
        Queue.pop();

        y = front.y;
        x = front.x;

        for(int k=0;k<4;k++) {
            int yy = y + dy[k];
            int xx = x + dx[k];

            if(Map[yy][xx]) {
                cnt++;
                Map[yy][xx] = 0;
                Queue.push(make_p(yy, xx));
            }
        }
    }


    return cnt;
}

int main() {
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            scanf("%1d",&Map[i][j]);
        }
    }

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(Map[i][j]) {
                result.push_back(getGroup(i, j));
            }
        }
    }

    sort(result.begin(), result.end());

    printf("%d\n",result.size());

    for(int i=0;i<result.size();i++) printf("%d\n",result[i]);

    return 0;
}