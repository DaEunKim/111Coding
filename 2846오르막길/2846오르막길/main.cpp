//
//  main.cpp
//  2846오르막길
//
//  Created by 김다은 on 2017. 4. 13..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int p[1001]={0,};
    int cha[1001]={0,};
    for(int i = 0;i<n;i++)
        cin >> p[i];
    
    int max = -999;
    
    for(int i = 0;i<n-1;i++){
        
        if(p[i]<p[i+1]){
            cha[i+1] = cha[i] + p[i+1] - p[i];
        }
        else{
            cha[i+1] = 0;
        }
    }
    for(int i = 0;i<n;i++){
        if(max < cha[i])
            max = cha[i];
    }
    cout<< max<<endl;
    
}
