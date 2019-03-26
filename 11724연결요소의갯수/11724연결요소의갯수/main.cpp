//
//  main.cpp
//  11724연결요소의갯수
//
//  Created by 김다은 on 26/03/2019.
//  Copyright © 2019 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void dfs(int cur, int N, int arr[1001][1001], int vis[1001]){
    vis[cur] = 1;
    for(int i = 1;i<=N;i++){
        if(!vis[i] && arr[cur][i] == 1){
            dfs(i, N, arr, vis);
        }
    }
}

int main(int argc, const char * argv[]) {
    int N, M;
    cin >> N >> M;
    int u=0, v=0;
    
    int arr[1001][1001] = {0,};
    int vis[1001] = {0,};
    for(int i = 0; i<M;i++){
        cin >> u >> v;
        arr[u][v] = arr[v][u] = 1;
    }
    
    int cnt = 0;
    for(int i = 1;i<=N;i++){
        if(!vis[i]){
            cnt++;
            dfs(i, N, arr, vis);
        }
    }
    cout<< cnt<<endl;
    
}
