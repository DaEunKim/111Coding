//
//  main.cpp
//  3184양
//
//  Created by 김다은 on 04/03/2019.
//  Copyright © 2019 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int r, c;//행과 열
char arr[251][251];
int total_o=0, total_v=0;
bool vis[251][251];

queue<pair<int, int>> q;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int cnt_v=0, cnt_o=0;

void bfs(int i, int j){
    int a, b;
    cnt_v=0;
    cnt_o=0;
    q.push(make_pair(i, j));
    
    if(arr[i][j]=='v')
        cnt_v++;
    else if(arr[i][j]=='o')
        cnt_o++;
    
    vis[i][j] = 1;
    
    while (!q.empty()) {
        a = q.front().first;
        b = q.front().second;
        q.pop();
        
        for(int i = 0;i<4;i++){
            int x = dx[i] + a;
            int y = dy[i] + b;
            if(x<0 || y<0 || x>=r || y>=c || vis[x][y] || arr[x][y]=='#')
                continue;
            if(!vis[x][y] && arr[x][y]=='v'){
                cnt_v++;
            }
            else if(!vis[x][y] && arr[x][y]=='o'){
                cnt_o++;
            }
            vis[x][y] = 1;
            q.push(make_pair(x, y));
        }
    }
    
    if(cnt_o > cnt_v){
        total_o += cnt_o;
    }
    else{
        total_v += cnt_v;
    }
    
}

int main(int argc, const char * argv[]) {
    
    cin >> r >> c;
    
    for(int i = 0;i<r;i++){//행
        for(int j = 0;j<c;j++){//열
            cin >> arr[i][j];
            
        }
    }
    
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(!vis[i][j] && arr[i][j]!='#'){
                bfs(i, j);
                
            }
        }
    }
    
    cout<< total_o <<" "<<total_v<<endl;

}
