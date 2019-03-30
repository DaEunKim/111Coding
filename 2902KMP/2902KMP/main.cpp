//
//  main.cpp
//  2902KMP
//
//  Created by 김다은 on 2017. 4. 13..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s;
    cin >> s;
    char arr[101]={0,};
    for(int i = 0;i<s.size();i++){
        arr[i] = s.at(i);
    }

    for(int i = 0;i<s.size();i++){
        
        if('A'<=arr[i] && arr[i]<='Z'){
            cout << arr[i];
        }
        
    }
    cout<<endl;
    
    
    
}
