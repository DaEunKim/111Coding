//
//  main.cpp
//  14487욱제는효도쟁이
//
//  Created by 김다은 on 2017. 6. 27..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int v[50001] ={0,};
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    int max_value=0;
    int sum=0;
    
    for(int i = 0;i<n;i++){
        if(max_value < v[i])
            max_value = v[i];
    }
    for(int i = 0;i<n;i++){
        sum += v[i];
    }
    int ans;
    ans = sum - max_value;
    cout<<ans<<endl;
    
    
    
}
