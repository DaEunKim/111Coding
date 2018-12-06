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
int vis[50][50] = {0,};

int dx[] = {-1,0,1,0}; //행 이동을 위한 배열   //북, 동, 남, 서
int dy[] = {0,1,0,-1}; //열 이동을 위한 배열

int turn_left(int d){
    if(d==0){//북 -> 서
        return 3;
    }
    else if(d==1){//동 -> 북
        return 0;
    }
    else if(d==2){//남 -> 동
        return 1;
    }
    else{//서 -> 남
        return 2;
    }
}
int turn_back(int d){
    if(d==0){//북 -> 남
        return 2;
    }
    else if(d==1){//동 -> 서
        return 3;
    }
    else if(d==2){//남 -> 북
        return 0;
    }
    else{//서 -> 동
        return 1;
    }
}

int ans = 1;
void dfs(int x, int y, int d){
    int cx, cy, cd=d;   //현재 함수 내의 x,y,d 값 저장을 위한 변수
    
    for(int i=0;i<4;i++){    //총 4방향으로 이동할 수 있으므로 4번 돌림
        cd=turn_left(cd);    //방향을 바꾸기 위한 식  // 북,서,남,동(0,3,2,1) 순서로 변경
        cx=x+dx[cd];
        cy=y+dy[cd];    // 머리를 둔 방향으로 한칸 이동
        
        if(cx>N-2 || cx<1 || cy>M-2 || cy<1 || arr[cx][cy]==1)  //이동한 칸이 벽이면
            continue;   //위로 돌아가서 방향 바꿈
        if(arr[cx][cy]==0){ //청소 안한 칸이면
            ans++;    //청소하고 카운트 증가
            arr[cx][cy]=2;  //청소했다고 표시
            dfs(cx,cy,cd);  //다음칸 방문을 위해 dfs함수 호출
            return;
        }
    }
    //4방향의 칸 중 방문할 칸이 없으면
    cd=turn_back(d);     // 후진을 위한 방향 설정
    // 후진
    cx=x+dx[cd];
    cy=y+dy[cd];
    if(arr[cx][cy]==1)  //후진한 곳이 벽이면 리턴
        return;
    else    //아니면
        dfs(cx,cy,d);   //현재 위치와 기존의 방향으로 dfs함수 호출
}


int main(int argc, const char * argv[]) {
    cin >> N >>M;
    cin >> r >> c >>d; //d가 0인 경우에는 북쪽을, 1인 경우에는 동쪽을, 2인 경우에는 남쪽을, 3인 경우에는 서쪽
    for(int i = 0;i<N;i++){
        for(int j = 0;j<M;j++){
            cin >> arr[i][j];
        }
    }
    arr[r][c] = 2;
    dfs(r, c, d);
    cout<< ans<<endl;
    
    return 0;
}
