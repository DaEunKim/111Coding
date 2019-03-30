//
//  main.cpp
//  7562나이트의이동
//
//  Created by 김다은 on 2018. 4. 10..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int l;
int init_x, init_y;
int final_x, final_y;
int arr[300][300] = {0, };
int vis[300][300] = {0, };
queue<pair<int, int>> q;

int dx[] ={-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] ={-1, 1, -2, 2, -2, 2, -1, 1};

void bfs(){
    q.push(make_pair(init_x, init_y));
    while (!q.empty()) {
        int first = q.front().first;
        int second = q.front().second;
        q.pop();
        
        if(first==final_x && second==final_y){
            break;
        }
        for(int i = 0;i<8;i++){
            int x = first + dx[i];
            int y = second + dy[i];
            if(x<0 || y<0 || x>=l || y>=l){
                continue;
            }
            if(!vis[x][y] && arr[x][y]==0){
                q.push(make_pair(x, y));
                arr[x][y] = 1;
                vis[x][y] = vis[first][second] + 1;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    for(int z = 0; z<n; z++){
        cin >> l;
        
        cin >> init_x >> init_y;
        cin >> final_x >> final_y;
        
        memset(vis, 0, sizeof(vis));
        memset(arr, 0, sizeof(arr));
        while (!q.empty()) {
            q.pop();
        }
        
        vis[init_x][init_y] = 0;
        arr[init_x][init_y] = 1;
        bfs();
        cout<<vis[final_x][final_y]<<endl;
    }
    
    return 0;
}
