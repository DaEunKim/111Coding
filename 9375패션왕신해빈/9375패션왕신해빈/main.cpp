//
//  main.cpp
//  9375패션왕신해빈
// map, Combinatorics
//  Created by 김다은 on 27/02/2019.
//  Copyright © 2019 김다은. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin  >> n;
    
    for(int z = 0;z<n;z++){
        int num;
        cin >> num;
        
        map<string, int> m;
        string clothes_name, clothes_type;
        
        for(int i = 0;i<num;i++){
            cin >> clothes_name>> clothes_type;
            m[clothes_type]++;
        }
        int ans = 1;
        for(auto i = m.begin();i!=m.end();i++){
            ans *= i->second + 1; // 입거나 안입는 경우의수를 위해 +1
            
        }
        cout<< ans-1<<endl;//공집합 제거
    }
}
