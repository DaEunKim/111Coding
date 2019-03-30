//
//  main.cpp
//  14502연구소
//
//  Created by 김다은 on 2018. 4. 9..
//  Copyright © 2018년 김다은. All rights reserved.
//
//  안전 영역 크기의 최대값구하기
//

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N, M;
int arr[8][8] = {0, };
int fence_arr[8][8]={0,};
int lab[8][8] = {0,};


int dx[]={1, 0, -1, 0};
int dy[]={0, 1, 0, -1};

int ans = 0;
queue<pair<int, int>> q;
void mapCopy(int (*a)[8], int (*b)[8]){
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            a[i][j] = b[i][j];
        }
    }
}
void bfs(){
    mapCopy(lab,fence_arr);
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(lab[i][j] == 2){
                q.push(make_pair(i, j));
            }
        }
    }
    
    while (!q.empty()) {
        int first = q.front().first;
        int second = q.front().second;
        q.pop();
        for(int i = 0;i<4;i++){
            int x = first + dx[i];
            int y = second + dy[i];
            if(x<0 || y<0 || x>=N || y>=M){
                continue;
            }
            if(lab[x][y]==0){
                q.push(make_pair(x, y));
                lab[x][y] = 2;
            }
        }
    }
    int cnt=0;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(lab[i][j]==0)
                cnt++;
        }
    }
    ans = max(ans, cnt);
}

void dfs(int depth){
    if(depth==3){
        bfs();
        return;
    }
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(fence_arr[i][j]==0){
                fence_arr[i][j] =1;
                dfs(depth+1);
                fence_arr[i][j] = 0;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> N >>M;
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            if(arr[i][j] == 0){
                mapCopy(fence_arr, arr);
                fence_arr[i][j] = 1;
                dfs(1);
                fence_arr[i][j] = 0;
            }
        }
    }
    cout<< ans<<endl;
    
    return 0;
}
