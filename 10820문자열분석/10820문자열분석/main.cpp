//
//  main.cpp
//  10820문자열분석
//
//  Created by 김다은 on 2017. 4. 13..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void){
    
    while(1){
        string n;
        getline(cin, n);
        if(n.size() == 0)
            break;
        
        int small=0;
        int big=0;
        int num=0;
        int empty=0;
        
        char arr[101]={0,};
        
        for(int i = 0;i<n.size();i++){
            arr[i] = n.at(i);
        
        }
        for(int i = 0;i<n.size();i++){
            if('a'<=arr[i] && arr[i]<='z')
                ++small;
            if('A'<=arr[i] && arr[i]<='Z')
                ++big;
            if('0'<=arr[i]&& arr[i]<='9')
                ++num;
            if(arr[i]==' ')
                ++empty;
        }
        cout<< small<<" "<<big<<" "<<num<<" "<<empty<<endl;
    }
    
}
