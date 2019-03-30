//
//  main.cpp
//  입력시 종료
//
//  Created by 김다은 on 2018. 2. 5..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    string a;

    while (1) {
        getline (cin ,a);

        if(a=="\0")
            break;
        cout<< a<<endl;
        
    }
    return 0;
    
    
}
