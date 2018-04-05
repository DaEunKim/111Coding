#include <cstdio>
using namespace std;
/*
 * Time complexity: O(n^2)
 * Space complexity: O(n^2)
 */

int N;
int x,y;
int adj[100001][100001];
int vis[100001];
int cnt =0;

void dfs(int cur);

int main(int argc, const char * argv[]) {
    scanf("%d\n", &N);
    for(int i = 0;i<N;i++){
        scanf("%d %d", &x, &y);
        adj[x][y] = adj[y][x] = 1;
    }
    dfs(adj[x][y]);
    printf("%d\n", cnt);
    
    return 0;
}
void dfs(int cur){
    cnt++;
    vis[cur] = 1;
    for(int i = 1;i<N;i++){
        if(adj[cur][i] && !vis[i]){
            dfs(i);
        }
    }
}
