//
//  main.cpp
//  13717포켓몬고
//
//  Created by 김다은 on 2017. 5. 11..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(void){
    int N;
    scanf("%d", &N);
    
    string poketmon[71];
    int K[401]={0, };
    int M[100001]={0, };
    
    int cnt[71];
    int total = 0;
    int tmp = 0;
    int tmp2 = 0;
    
    for(int i = 0;i<N;i++){
        cin >> poketmon[i];
        cin >> K[i] >> M[i];
        cnt[i] = {0,};
        while (K[i] <= M[i]) {
            M[i] = M[i]-K[i]+2;
            cnt[i]++;
            total++;
        }
        
        if(tmp < cnt[i]){
            tmp = cnt[i];
            tmp2 = i;
        }
        
    }
    cout<< total<<endl;
    cout<<poketmon[tmp2]<<endl;
    
    
}
