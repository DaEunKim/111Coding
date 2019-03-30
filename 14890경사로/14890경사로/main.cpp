//
//  main.cpp
//  14890경사로
//
//  Created by 김다은 on 2018. 10. 16..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int arr[101][101] ={0,};
int vis[101] = {0,};
int N, L;
int cnt = 0;
int area = 0;
int area2 = 0;
int tmp;

void height_gap(int a, int b){
    area2++;
    vis[a] = 1;
    int dx[4] = {1,0,-1, 0};
    int dy[4] = {0,1,0, -1};
    
    int tmp2 = arr[a][b];
    for(int i = 0;i<4;i++){
        int x = a + dx[i];
        int y = b + dy[i];
        if(x<0 || y<0 || x>=N || y>=N)
            continue;
        if(!vis[x] && abs(arr[x][y] - tmp2) == 1 && area2==L){
            area2 = 0;
            height_gap(x, y);
        }
        
    }
}
void bfs(int a, int b){
    area++;
    tmp = arr[a][b];
    vis[a] = 1;
    
    int dx[4] = {1,0,-1, 0};
    int dy[4] = {0,1,0, -1};
    
    for(int i = 0;i<4;i++){
        int x = a + dx[i];
        int y = b + dy[i];
        if(x<0 || y<0 || x>=N || y>=N)
            continue;
        if(!vis[a] && arr[x][y] == tmp && cnt>=L){
            cnt = 0;
            bfs(x, y);
        }
    }
    
}
int cnt2 = 0;


void column(int a, int b){
    if(arr[a][b] == arr[a+1][b]){
        column(a+1, b);
    }
    else if(arr[a][b] == arr[a+1][b] - 1){
        if(a+1 < 0 || a+1 >=N)
            return;
        for(int i = 0;i<L;i++){
            if(!vis[a-i])
                vis[a-i] = 1;
            else
                return;
        }
        column(a+1, b);
    }
    else if(arr[a][b] == arr[a+1][b] +1 ){
        
    }

    column(a+1, b);
}

void row(int a, int b){
    row(a, b+1);
}

int main(int argc, const char * argv[]) {
    cin >> N >> L;
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    
    tmp = arr[0][0];
    
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            if(!vis[i] && arr[i][j] ==tmp){
                cnt++;
                bfs(i, j);
            }
            if(!vis[i] && abs(arr[i][j]-tmp) ==1){
                cnt2++;
                bfs(i, j);
            }
        }
    }
    cout<< cnt<<endl;
    cout<< area<<endl;
//    cout<< area2/N<<endl;
    cout<< cnt2<<endl;

}
