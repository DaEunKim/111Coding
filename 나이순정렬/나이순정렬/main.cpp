//
//  main.cpp
//  나이순정렬
//
//  Created by 김다은 on 2017. 2. 20..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <list>
using namespace std;

int main(void){
    int n;
    scanf("%d", &n);
    
    int N = 0;
    
    list<string> age[100001];
    
    string name[100001];
    
    for(int i = 0;i<n;i++){
        scanf("%d", &N);
        
        cin >> name[i];
        
        age[N].push_back(name[i]);
        
    }
    
    for(int i = 0;i<100001; i++){
        if(age[i].size() !=0)
            for(auto d : age[i])
                printf("%d %s\n", i, d.c_str());
                
    
    }
}
