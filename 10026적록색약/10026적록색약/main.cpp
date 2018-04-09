//
//  main.cpp
//  10026적록색약
//
//  Created by 김다은 on 2018. 4. 7..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;

char arr[101][101];
int n;
int vis[101][101] = {0, };
int cnt = 0;
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
//상하좌우를 검사해서 다르면 재귀로 dfs

void dfs(int a, int b, char c){
    vis[a][b] = 1;
    for(int i = 0;i<4;i++){
        int x = a + dx[i];
        int y = b + dy[i];
        if(x<0 || y<0 || x>=n || y>=n)
            continue;
        if(!vis[x][y] && arr[x][y]==c){
            dfs(x, y, c);
        }
    }
}

int main(void){
    cin >> n;
    string tmp[101];
    for(int i = 0;i<n;i++){
        cin >> tmp[i];
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            arr[i][j] = tmp[i].at(j);
        }
    }
    int cnt_RGB=0, cnt_RB=0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(!vis[i][j]){
                dfs(i, j, arr[i][j]);
                ++cnt_RGB;
            }
        }
    }
    
    for(int i =0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(arr[i][j]=='G'){
                arr[i][j] = 'R';
            }
        }
    }
    memset(vis, 0, sizeof(vis)); //0으로 초기화
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(!vis[i][j]){
                dfs(i, j, arr[i][j]);
                ++cnt_RB;
            }
        }
    }

    cout<< cnt_RGB<<" "<< cnt_RB<<endl;
}
