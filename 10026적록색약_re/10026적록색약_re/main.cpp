//
//  main.cpp
//  10026적록색약_re
//
//  Created by 김다은 on 2019. 1. 24..
//  Copyright © 2019년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int n;
char arr[101][101];
int check[101][101] = {0, };

int cnt_R = 0;
int cnt_G = 0;
int cnt_B = 0;
int cnt = 0;

void bfs(int a, int b){
    check[a][b] = 1;
    if(a<0 || b<0 || a>n+1 || b>n+1)
        return;
    
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    
    for(int i = 0;i<4;i++){
        int x = dx[i] + a;
        int y = dy[i] + b;
        if(!check[x][y] && arr[x][y]=='R'){
            cnt_R++;
        }
        if(!check[x][y] && arr[x][y]=='G'){
            cnt_G++;
        }
        if(!check[x][y] && arr[x][y]=='B'){
            cnt_B++;
        }
        check[x][y] = 1;
    }
    
        
}
int main(int argc, const char * argv[]) {
    cin >> n;
    
    for(int i = 0;i<n;i++){
        string tmp;
        cin >> tmp;
        for(int j = 0;j<n;j++){
            arr[i][j] = tmp.at(j);
        }
    }
    
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!check[i][j] && arr[i][j]){
                bfs(i, j);
                cnt++;
            }
            
        }
        cout<< cnt <<endl;
    }
    
    cout<< cnt_R <<" "<<cnt_G <<" "<<cnt_B <<endl;
    
}
