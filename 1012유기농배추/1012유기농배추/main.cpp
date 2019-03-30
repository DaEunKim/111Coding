//
//  main.cpp
//  1012유기농배추
//
//  Created by 김다은 on 2018. 4. 9..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

int T;
int M, N, K;
int field[52][52] = {0, };

int dx[] = {0 , 0, 1, -1};
int dy[] = {1 , -1, 0, 0};

int vis[52][52] = {0,};

void dfs(int a, int b){
    vis[a][b] = 1;
    for(int i = 0;i<4;i++){
        int x = a+ dx[i];
        int y = b+ dy[i];
        if(x<0 || y<0 || x>M || y>N){
            continue;
        }
        if(!vis[x][y] && field[x][y]){
            dfs(x, y);
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> T;
    for(int z = 0; z<T; z++){
        cin >> M >> N >> K;
        int x, y;
        memset(field, 0, sizeof(field));
        memset(vis, 0, sizeof(vis));
        
        for(int i = 0; i<K;i++){
            cin >> x >> y;
            field[x][y] = 1;
        }
        
        int cnt = 0;
        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                if(!vis[i][j] && field[i][j]){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout<< cnt<<endl;
    }
    return 0;
}
