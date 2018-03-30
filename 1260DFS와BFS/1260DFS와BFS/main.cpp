//
//  main.cpp
//  1260DFS와BFS
//
//  Created by 김다은 on 2018. 3. 30..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int N, M;
int V;
int adj[1001][1001];
int vis[1001];

void dfs(int cur){
    cout<< cur<<" ";
    vis[cur] = 1;
    for(int i = 1;i<=N;i++){
        if(adj[cur][i] && !vis[i]){
            dfs(i);
        }
    }
}

void bfs(int cur){
    queue<int> q;
    q.push(cur);
    vis[cur] = 2;
    while (!q.empty()) {
        cur = q.front();
        cout<< q.front()<<" ";
        q.pop();
        for(int i = 1;i<=N;i++){
            if(adj[cur][i] && vis[i]!=2){
                vis[i] =2;
                q.push(i);
            }
        }

    }
}

int main(void){
    cin >> N >> M;
    cin >> V;
    for(int i = 0;i<M;i++){
        int x, y;
        cin >> x >> y;
        adj[x][y] = adj[y][x] = 1;
    }
    dfs(V);
    puts("");
    bfs(V);
    
}
