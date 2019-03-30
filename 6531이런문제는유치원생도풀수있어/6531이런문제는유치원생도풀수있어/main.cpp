//
//  main.cpp
//  6531이런문제는유치원생도풀수있어
//
//  Created by 김다은 on 2017. 4. 13..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void){
    int T;
    cin >> T;
    string s;
    char arr[201]={0,};
    int cnt = 0;
    for(int i = 0;i<T;i++){
        cin >> s;
        cnt++;
        for(int i = 0;i<s.size();i++){
            arr[i] = s.at(i);
            cout<<arr[i]<<" ";
            
        }
        for(int i = 0;i<s.size();i++){
            if(s.front()=='{' && s.back() =='}'){
                if(arr[i]=='{' && arr[i+1]=='}'){
                    cout<< "Word #"<<cnt<<": Set"<<endl;
                    
                }
                else
                    cout<<"Word #"<<cnt<<": No Set"<<endl;
            }
            else
                cout<<"Word #"<<cnt<<": No Set"<<endl;
            

        }

        
        
    }
    
}
