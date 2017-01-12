//
//  main.cpp
//  sort_easy
//
//  Created by 김다은 on 2017. 1. 12..
//  Copyright © 2017년 김다은. All rights reserved.
//1874번

#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
using namespace std;

int main(void){
    int n;
    scanf("%d", &n);
    stack<int> s;
    queue<char> q;
    
   // int arr1[100000]={0,};//1 2 3 4 5 6 7 8
    int arr2[100000]={0,};//4 3 6 8 7 5 2 1
    
    for(int i = 1;i<=n;i++){
        scanf("%d", &arr2[i]);
    }
    int i = 1;
    int j = 1;
    
    while(1){
        
        if(s.size()==0 && j > n){
            break;
        }
        else if(s.size() >0 && s.top()>arr2[i]){
            printf("NO\n");
            return 0;
            
        }
        else{
            if(s.size()>0 && s.top()==arr2[i]){
                q.push('-');
                s.pop();
                i++;
            }
            else{
                s.push(j);
                q.push('+');
                j++;
            }
            
        }
        
    }
    while(q.size()!=0){
        printf("%c\n", q.front());
        q.pop();
    }
    
    
}
