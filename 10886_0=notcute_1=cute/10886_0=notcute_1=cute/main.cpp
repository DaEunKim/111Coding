//
//  main.cpp
//  10886_0=notcute_1=cute
//
//  Created by 김다은 on 25/02/2019.
//  Copyright © 2019 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    int a;
    int nocute_cnt = 0;
    int cute_cnt = 0;
    
    for(int i = 0;i<n;i++){
        cin >> a;
        if(a==0)
            nocute_cnt++;
        else
            cute_cnt++;
        
    }
    if(nocute_cnt > cute_cnt)
        cout<< "Junhee is not cute!"<<endl;
    else
        cout<<"Junhee is cute!"<<endl;
    return 0;
}

