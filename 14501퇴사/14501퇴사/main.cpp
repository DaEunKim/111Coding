//
//  main.cpp
//  14501퇴사
//
//  Created by 김다은 on 2018. 4. 14..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int N;
int T[1001] = {0,};
int P[1001] = {0,};

int vis[1001] = {0,};
queue<int> q;
int sum = 0;
int max_val = 0;

void bfs(){
    while (!q.empty()) {
        int idx = q.front();
        q.pop();

        if(idx==N+1){
            max_val = max(max_val, sum);
            return;
        }
        if(T[idx] + idx > N+1){
            break;
        }
        if(idx+1 > N+1){
            break;
        }
        for(int i = idx+1;i <= T[idx];i++){
            vis[i] = 1;
        }

        for(int i = 1; i <= N+1; i++){
            if(!vis[i] && T[i]+i <= N+1){
                sum += P[i];
                vis[i] = 1;
                q.push(i);
            }
        }
    }
    
}
int main(int argc, const char * argv[]) {
    cin >> N;

    for(int i = 1;i<=N;i++){
        cin >> T[i];
        cin >> P[i];
    }
    q.push(1);
    bfs();
    cout<< max_val<<endl;
    return 0;
}

////
////  main.cpp
////  14501퇴사
////
////  Created by 김다은 on 2018. 4. 14..
////  Copyright © 2018년 김다은. All rights reserved.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int N;
//int T[1001] = {0,};
//int P[1001] = {0,};
//
//int vis[1001] = {0,};
//int max_val = 0;
//
//void dfs(int a, int sum){
//    if(a==N+1){
//        max_val = max(max_val, sum);
//        return;
//    }
//    if(T[a] +a <= N+1){
//        dfs(T[a]+a, sum + P[a]);
//    }
//    if(a+1 <= N+1){
//        dfs(a+1, sum);
//    }
//}
//
//int main(int argc, const char * argv[]) {
//    cin >> N;
//    for(int i = 1;i<=N;i++){
//        cin >> T[i];
//        cin >> P[i];
//    }
//    dfs(1,0);
//    cout<< max_val<<endl;
//    return 0;
//}
//

