#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100050;

bool flag;
bool check[MAX];
int group[MAX];
int n, m;
vector <int> graph[MAX];

void isBipartite(int node, int c) {
    queue <int> Queue;

    Queue.push(node);
    group[node] = c;
    check[node] = true;

    // BFS 시작

    while(!Queue.empty()) {
        int cur = Queue.front();
        Queue.pop();

        for(int i=0;i<graph[cur].size();i++) {
            int node2 = graph[cur][i];

            if(group[node2] != 0 && group[node2] == group[cur]) {
                flag = true;
                return;
            }

            int c2;

            if(group[cur] == 1) c2 = 2;
            else c2 = 1;

            if(!check[node2]) {
                check[node2] = true;
                group[node2] = c2;

                Queue.push(node2);
            }
        }
    }

}
int main() {
    scanf("%d %d",&n, &m);

    for(int i=0;i<m;i++) {
        int a, b;

        scanf("%d %d",&a, &b);

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    flag = false;
    isBipartite(1, 1);

    if(flag) printf("No\n");
    else printf("Yes\n");

    return 0;
}