//
//  main.cpp
//  1697숨바꼭질
//
//  Created by 김다은 on 2018. 4. 10..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int N, K;
int vis[100001] = {0, };
queue<int> q;

void bfs(){
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if(cur == K){
            return;
        }
        if(cur+1 <= 100000 && vis[cur+1]==0){
            q.push(cur+1);
            vis[cur+1] = vis[cur] + 1;
        }
        if(cur-1 >= 0 && vis[cur-1]==0){
            q.push(cur-1);
            vis[cur - 1] = vis[cur] + 1;
        }
        if(cur*2 <= 100000 && vis[cur*2]==0){
            q.push(cur*2);
            vis[cur*2] = vis[cur] + 1;
        }
        
    }
    
}

int main(int argc, const char * argv[]) {
    cin >> N >> K;
    
    q.push(N);
    vis[N] = 0;
    bfs();
    
    cout<< vis[K]<<endl;
    
    return 0;
}
