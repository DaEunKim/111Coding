//
//  main.cpp
//  2468안전영역
//
//  Created by 김다은 on 2018. 4. 9..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int arr[101][101] = {0, };
int vis[101][101] = {0, };

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int max_val = 1;
int min_val = 1;


int max(int a, int b){
    return (a<b)?b:a;
}
int min(int a, int b){
    return (a>b)?b:a;
}

void dfs(int a, int b, int height){
    vis[a][b] = 1;
    for(int i = 0;i<4;i++){
        int x = a + dx[i];
        int y = b + dy[i];
        if(!vis[x][y] && arr[x][y] >= height){
            dfs(x, y, height);
        }
    }
    
}

int main(int argc, const char * argv[]) {
    cin >> N;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cin >> arr[i][j];
            max_val = max(max_val, arr[i][j]);
            min_val = min(min_val, arr[i][j]);

        }
    }
    
    
    int cnt = 0;
    int total_max_area = 0;
    for(int z = min_val; z <= max_val; z++){
        memset(vis, 0, sizeof(vis));

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(!vis[i][j] && arr[i][j] >= z){
                    dfs(i, j, z);
                    cnt++;
                }
            }
        }
        total_max_area = max(total_max_area, cnt);
        cnt = 0;
    }
    cout<< total_max_area<<endl;
    return 0;
}
