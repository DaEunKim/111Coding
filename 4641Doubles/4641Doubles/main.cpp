//
//  main.cpp
//  4641Doubles
//
//  Created by 김다은 on 2017. 6. 29..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

int main(void){
    int input_value = 0;
    
    list<int> v;
    int cnt = 0;
    
    while (input_value!=-1) {
        cin >> input_value;
        
        if(input_value!=0){
            v.push_back(input_value);
            
            if(v.front()*2 == v.back()){
                cnt++;
            }
        }
        else{
            cout<<cnt<<endl;
            v.clear();
        }
//        
//        cout<<cnt<<endl;

    }
//    1 4 3 2 9 7 18 22 0
//    2 4 8 10 0
//    7 5 11 13 1 3 0
//    -1
}
