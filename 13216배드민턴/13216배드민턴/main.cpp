//
//  main.cpp
//  13216배드민턴
//
//  Created by 김다은 on 2017. 11. 27..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    string s;
    cin >> s;
    
    unsigned long size = s.size();
    char arr[1001];
    for(int i = 0;i<size;i++){
        arr[i] = s.at(i);

    }
    int cnt_A = 0;
    int cnt_B = 0;
    
    char winner = NULL;
    for(int i = 0;i<size;i++){
        if(arr[i]=='A'){
            cnt_A++;
        }
        if(arr[i]=='B'){
            cnt_B++;
        }
        
        if(cnt_A == 21 || cnt_B ==21){
            cout<< cnt_A<<"-"<<cnt_B<<endl;
            if(cnt_A >  cnt_B)
                winner = 'A';
            else
                winner = 'B';
            cnt_A = 0; cnt_B = 0;
        }

    }
    cout<< winner <<endl;

}
