//
//  main.cpp
//  14503로봇청소기
//
//  Created by 김다은 on 2018. 4. 14..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int N, M;
int r, c, d;
int arr[50][50] = {0,};

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

int turn_left(int now, int next){
    if(next == 0){
        if(now==0){//북 -> 서
            return 3;
        }
        else if(now==1){//동 -> 북
            return 0;
        }
        else if(now==2){//남 -> 동
            return 1;
        }
        else{//서 -> 남
            return 2;
        }
    }
    else{
        if(now==0){//북 -> 남
            return 2;
        }
        else if(now==1){//동 -> 서
            return 3;
        }
        else if(now==2){//남 -> 북
            return 0;
        }
        else{//서 -> 동
            return 1;
        }
    }
}


void dfs(int a, int b, int dir){
    int x, y;
    int ret = 1;
    arr[a][b] = 2;
    int cnt = 0;

    while (1) {
        if(cnt == 4){
            dir = turn_left(dir, 1);
            x = a+dx[dir];
            y = b+dy[dir];
            if(x<0 || y<0 || x>=N || y >= M || arr[x][y]==1){
                break;
            }
            a = x;
            b = y;
            dir = turn_left(dir, 1);
            cnt = 0;
            continue;
        }
        
        dir = turn_left(dir, 0);
        x = a+dx[dir];
        y = b+dy[dir];
        cnt++;
        
        if(x<0 || y<0 || x>=N || y >= M || arr[x][y]!=0){
            continue;
        }
        a = x;
        b = y;
        
        arr[a][b] = 2;
        ret++;
        cnt = 0;

    }
    cout<< ret<<endl;
}


int main(int argc, const char * argv[]) {
    cin >> N >>M;
    cin >> r >> c >>d; //d가 0인 경우에는 북쪽을, 1인 경우에는 동쪽을, 2인 경우에는 남쪽을, 3인 경우에는 서쪽
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    dfs(r, c, d);
    
    return 0;
}
