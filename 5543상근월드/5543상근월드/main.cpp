//
//  main.cpp
//  5543상근월드
//
//  Created by 김다은 on 2017. 8. 4..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int burger[3];
    int drink[2];
    
    for(int i = 0;i<3;i++){
        cin >> burger[i];
    }
    for(int i = 0;i<2;i++){
        cin >> drink[i];
    }
    
    int min = 3000;
    for(int i = 0;i<3;i++){
        if(min > burger[i])
            min = burger[i];
    }
    int min2 = 3000;
    for(int i = 0;i<2;i++){
        if(min2 > drink[i])
            min2 = drink[i];
    }
    
    cout<< min+min2 - 50 <<endl;
    
}
