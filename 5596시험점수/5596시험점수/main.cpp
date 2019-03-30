//
//  main.cpp
//  5596시험점수
//
//  Created by 김다은 on 2017. 12. 26..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int minguk_info, minguk_math, minguk_science, minguk_english;//민국 정보, 수학, 과학, 영어
    cin >> minguk_info >> minguk_math >> minguk_science >> minguk_english;
    int mansae_info, mansae_math, mansae_science, mansae_english;//만세 정보, 수학, 과학, 영어
    cin >> mansae_info >> mansae_math >> mansae_science >> mansae_english;
    
    int S, T;
    S = minguk_info+minguk_math+minguk_science+minguk_english;
    T = mansae_info+mansae_math+mansae_science+mansae_english;
    if(S>=T)
        cout<< S <<endl;
    else
        cout<< T<<endl;
    
}
