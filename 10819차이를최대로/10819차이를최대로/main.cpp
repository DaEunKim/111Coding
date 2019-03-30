//
//  main.cpp
//  10819차이를최대로
//
//  Created by 김다은 on 2017. 3. 30..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

int main(void){
    int N;
    cin >>N;
    int a;
    int sum = 0;
    
    list<int> S;
    list<int> L;
    
    for(int i = 0;i<N;i++){
        cin >> a;
        S.push_back(a);
        
    }
    
    S.sort();
    L.push_front(S.back());
    S.pop_back();
    L.push_front(S.front());
    S.pop_front();
    
    while(!S.empty()){
        
        if(L.front() < L.back()){
            if(abs(L.back()-S.front()) < abs(L.front()-S.back())){
                L.push_front(S.back());
                S.pop_back();
            }
            else{
                L.push_back(S.front());
                S.pop_front();
            }
            
        }
        else{
            if(abs(S.front()-L.front()) > abs(S.back()-L.back())){
                L.push_front(S.front());
                S.pop_front();
            }
            else{
                L.push_back(S.back());
                S.pop_back();
            }
        }
        
        
    }
    int c = 0;
    int arr[10];
    for(auto i = L.begin(); i!=L.end();i++){
        arr[c++] = *i;
    }
    
    for(int i = 1;i<N;i++){
        sum += abs(arr[i]-arr[i-1]);
    }
    
    cout<< sum <<endl;
    
}
