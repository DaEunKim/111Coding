//
//  main.cpp
//  2154수이어쓰기3
//
//  Created by 김다은 on 2017. 11. 18..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int length(int n, vector<int> v){
    int cnt = 0;
    while (n!=0) {
        cnt++;
        v.emplace_back(n%10);
        n= n/10;
        
    }
//    for(auto i = v.begin(); i!=v.end(); i++){
//        cout<< *i <<" ";
//    }
    return cnt;
    
}
int comp(int stand1, int stand2, vector<int> v){
    int cnt = 0;
    for(auto i = v.begin(); i!=v.end();i++){
        cnt++;
        if(stand1 == *i && stand2 == *(i+1))
            return cnt;
    }
    return cnt;
}




int main(void){
    int n;
    cin >> n;
    vector<int> v;
    
    int stand1 = n/10;
    int stand2 = n%10;

    cout<< stand1<<" "<<stand2<<endl;
    comp(stand1, stand2, v);
    int cnt = 0;
    
    for(int i = 1;i<=n;i++){
        
        cnt += length(i, v);
        
    }
    
    cout<<endl;
    cout<< cnt<<endl;
    
}

