//
//  main.cpp
//  7576토마토
//
//  Created by 김다은 on 2017. 8. 4..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int M, N;
int arr[1001][1001] = {0,};
int vis[1001][1001] = {0, };
int cnt = 0;
queue<pair<int, int>> q;

void bfs(int a, int b){
    q.push(make_pair(a, b));
    
    while (!q.empty()) {
        int first = q.front().first;
        int second = q.front().second;
        q.pop();
        
        if(first == 0 && second == 0)
            break;
        
        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        for(int i = 0;i<4;i++){
            int x = first + dx[i];
            int y = second + dy[i];
            
            if(x<0 || y<0 || x>=N || y>=M)
                continue;
            if(!vis[x][y] && arr[x][y] == 0){
                q.push(make_pair(x, y));
                vis[x][y] = vis[first][second] + 1;
            }
            if(arr[x][y] == -1){
                vis[x][y] = 1;
                continue;
            }
            
        }
    }
}

int main(void){
    cin >> M >> N;
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(arr[i][j]==1)
                bfs(i, j);
        }
    }

    bool flag = true;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(vis[i][j] == 0)
                flag = false;
            cout<< vis[i][j] <<" ";
        }
        cout<<endl;
    }
    if(flag == false)
        cout<< "-1"<<endl;
    else
        cout<< vis[0][0]<<endl;
}
