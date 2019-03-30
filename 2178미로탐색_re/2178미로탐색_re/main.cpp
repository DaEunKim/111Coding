//
//  main.cpp
//  2178미로탐색_re
//
//  Created by 김다은 on 2018. 4. 10..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int N,M;
int arr[101][101]={0,};
int vis[101][101] = {0,};

queue<pair<int, int>> q;
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void bfs(){
    q.push(make_pair(0, 0));
    while (!q.empty()) {
        int first = q.front().first;
        int second = q.front().second;
        q.pop();
        if(first==N-1 && second==M-1){
            break;
        }
        
        for(int i = 0;i<4;i++){
            int x = first + dx[i];
            int y = second + dy[i];
            if(x<0 || y<0 || x>=N || y >= M){
                continue;
            }
            if(!vis[x][y] && arr[x][y]==1){
                q.push(make_pair(x, y));
                vis[x][y] = vis[first][second]+1; //*
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> N>>M;
    string tmp;

    for(int i = 0;i<N;i++){
        cin >> tmp;
        for(int j = 0;j<M;j++){
            arr[i][j] = tmp.at(j)-'0';
        }
    }
    vis[0][0]=1;
    bfs();
    cout<< vis[N-1][M-1]<<endl;
    
    return 0;
}
