//
//  main.cpp
//  NHN2
//
//  Created by 김다은 on 2017. 9. 23..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arrange(vector<char> gender){
    if(gender.s)

}

int main(void){
    int con1, con2, con3;
    cin >> con1 >> con2 >> con3;
    
    int n;
    
    vector<char> gender;
    vector<int> age;
    vector<string> old;
    for(int i = 0;i<n;i++){
        char g;
        int a;
        string o;
        cin >> g >> a >> o;
        gender.emplace_back(g);
        age.emplace_back(a);
        old.emplace_back(o);
    }
    
    
    
}
