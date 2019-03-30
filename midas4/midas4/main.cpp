//
//  main.cpp
//  midas4
//
//  Created by 김다은 on 2017. 10. 2..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;

long long Factorial(long long val)
{
    long long Result = 1;
    for(long long i = 1; i <= val; i++)
    {
        Result *= i;
    }
    return Result;
}
long long Combination(long long N, long long R)
{
    return (Factorial(N)) / ((Factorial(N-R)) * Factorial(R));
}

int main(){
    int n, m;
    cin >> n >> m;
    
    char c[16];
    for(int i = 0;i<m;i++){
        cin >> c[i];
    }
    int consonant_cnt = 0;
    int vowel_cnt = 0;
    for(int i = 0;i<m;i++){
        if(c[i]=='a' || c[i]=='e' ||c[i]=='i' ||c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]=='E' ||c[i]=='I' ||c[i]=='O' || c[i]=='U'){
            consonant_cnt++;
        }
        else{
            vowel_cnt++;
        }
    }
    
    cout <<Combination(consonant_cnt, 1) * Combination(vowel_cnt, 2) * Combination(m-3, n-3)<<endl;
}

