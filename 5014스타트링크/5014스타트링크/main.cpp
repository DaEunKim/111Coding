//
//  main.cpp
//  5014스타트링크
//
//  Created by 김다은 on 2018. 4. 10..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int F, S, G, U, D;
int vis[1000001] = {0,};
int arr[1000001] = {0,};
queue<int> q;

void bfs(){
    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if(cur == G){
            return;
        }
        if(cur<1 || cur >F){
            break;
        }
        if(cur+U <=F && !vis[cur+U]){
            q.push(cur+U);
            vis[cur+U] = 1;
            arr[cur+U] = arr[cur] +1;
        }
        if(cur-D >=1  && !vis[cur-D]){
            q.push(cur-D);
            vis[cur-D] = 1;
            arr[cur-D] = arr[cur] +1;
        }
    }
}

int main(int argc, const char * argv[]) {
    cin >> F>> S>> G>> U>> D; //총 F층, S에서 시작
    
    memset(vis, 0, sizeof(vis));
    memset(arr, 0, sizeof(arr));
    q.push(S);
    vis[S] = 1;
    arr[S] = 0;
    bfs();
    
    if(!vis[G])
        cout<<"use the stairs"<<endl;
    else
        cout<< arr[G] <<endl;
    
    return 0;
}
