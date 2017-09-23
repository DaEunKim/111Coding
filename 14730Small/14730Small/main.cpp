//
//  main.cpp
//  14730Small
//
//  Created by 김다은 on 2017. 9. 23..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;


int square(int x, int k){
    int ans = 1;
    
    for(int i = 0;i<k;i++){
        ans *= x;
    }
    return ans;
}

int diff(int x, int c, int k){
    int answer = 0;
    answer = c*k*square(x, k-1);
    return answer;
}

int main(void){
    int n;
    cin >> n;
    
    int c, k;
    int answer = 0;
    
    for(int i = 0;i<n;i++){
        cin >> c >> k;
        answer += diff(1, c, k);
        
    }
    cout<< answer<<endl;
    
}
