//
//  main.cpp
//  4797캠핑
//
//  Created by 김다은 on 2017. 3. 29..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    
    int L, P, V;
    int cnt = 1;
    int result = 0;
    while(1){
        cin >> L>>P>>V;
        if(!L && !P && !V)
            break;
        
        result =(V/P)*L+V%P;
        cout<<"Case "<<cnt++<<": "<<result<<endl;
        
    }
    
    
}
