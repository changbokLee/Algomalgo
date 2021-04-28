#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 100050;

bool check[MAX];
int n, m;
int result;
vector <int> graph[MAX];

void getResult(int node) {
    result++;
    check[node] = true;

    for(int i=0;i<graph[node].size();i++) {
        int node2 = graph[node][i];

        if(!check[node2]) 
            getResult(node2);
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

    getResult(1);

    printf("%d\n",result-1);

    return 0;
}