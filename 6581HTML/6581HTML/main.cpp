//
//  main.cpp
//  6581HTML
//
//  Created by 김다은 on 2017. 4. 13..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(void){
    string n;
    char arr[81]={0,};
    
    while(1){
        getline(cin, n);
        for(int i = 0;i<n.size();i++){
            arr[i] = n.at(i);
        }
        if(n.empty())
            break;
        
        for(int i = 0;i<80;i++){
            
            
            if(arr[i]=='<' && arr[i+1]=='b' && arr[i+2]=='r' && arr[i+3]=='>'){
                
                arr[i] = '\n'; arr[i+1] = ' '; arr[i+2] = ' '; arr[i+3] = ' ';
                
            }
            if(arr[i]=='<' && arr[i+1]=='h' && arr[i+2]=='r' && arr[i+3]=='>'){
                cout<<endl;
                arr[i] = ' ';arr[i+1] = ' ';arr[i+2] = ' ';arr[i+3] = ' ';
                cout<<"--------------------------------------------------------------------------------";
                
            }
            if(strlen(arr)==80)
                cout<<endl;
            else
                cout<<arr[i];
            
        }
        
        cout<<endl;
        

    }
    
}
