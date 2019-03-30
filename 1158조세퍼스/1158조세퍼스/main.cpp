//
//  main.cpp
//  1158조세퍼스
//
//  Created by 김다은 on 2018. 10. 11..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    int N, M;
    cin >> N >> M;

    queue<int> q;
    for(int i = 0;i<N;i++){
        q.push(i+1);
    }
    cout<< "<";
    while (1) {
        if(q.size()==1){
            break;
        }
        for(int i = 0;i<M-1;i++){
            q.push(q.front());
            q.pop();
        }
        cout<< q.front() <<", ";
        q.pop();
    }
    cout<<q.front()<<">"<<endl;
    
}
