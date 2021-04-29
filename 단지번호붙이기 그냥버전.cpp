#include <cstdio>
#include <algorithm>
#include <iostream>

using namespace std;

const int MAX = 30;

int dy[4] = {-1, 0, 0, 1};
int dx[4] = {0, 1, -1, 0};
int n;
int Map[MAX][MAX];
vector <int> result;

int getGroup(int y, int x) {
    int cnt = 0;

    Map[y][x] = 0;
    cnt++;

    for(int k=0;k<4;k++) {
        int yy = y + dy[k];
        int xx = x + dx[k];

        if(Map[yy][xx]) {
            cnt += getGroup(yy, xx);
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