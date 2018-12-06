//
//  main.cpp
//  1966프린터큐
//
//  Created by 김다은 on 2018. 6. 5..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <queue>
using namespace std;

int main(int argc, const char * argv[]) {
    int testcase;
    cin >> testcase;
    
    for(int z = 0;z<testcase;z++){
        int n, m;
        cin >> n >> m;
        int arr[101] = {0, };
        queue<int> q;
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        int result = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] >= arr[m]){
                q.push(arr[i]);
            }
            else{
                result = i+1;
            }
        }
        
        cout<< result<<endl;
        
        

        
    }
}
