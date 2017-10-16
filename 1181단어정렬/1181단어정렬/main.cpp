//
//  main.cpp
//  1181단어정렬
//
//  Created by 김다은 on 2017. 10. 16..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void swap(string &a, string &b){
    string tmp;
    tmp = a;
    a = b;
    b = tmp;
    
}

bool comp(string a, string b) {
    return a.size() < b.size();
}

int main(void){
    int n;
    cin >> n;
    string a;
    set<string> s;
    vector<string> v;
    
    for(int i = 0;i<n;i++){
        cin >> a;
        s.insert(a);
    }
    for(auto i = s.begin(); i!=s.end(); i++){
        v.emplace_back(*i);
    }
    
    stable_sort(v.begin(), v.end(), comp);
    
    for(auto i = v.begin(); i!=v.end();i++){
        cout<< *i <<endl;
    }

}
