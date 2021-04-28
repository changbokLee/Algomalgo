#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100050;

bool flag;
bool check[MAX];
int result;
int n, m;
vector <int> graph[MAX];

void getResult(int node) {
    queue <int> Queue;

    Queue.push(node);
    check[node] = true;

    // BFS 시작

    while(!Queue.empty()) {
        int cur = Queue.front();
        Queue.pop();

        result++;

        for(int i=0;i<graph[cur].size();i++) {
            int node2 = graph[cur][i];

            if(!check[node2]) {
                check[node2] = true;

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
    getResult(1);

    printf("%d\n",result-1);

    return 0;
}