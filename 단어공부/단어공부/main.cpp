//
//  main.cpp
//  단어공부
//
//  Created by 김다은 on 2017. 2. 15..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(void){
    char s[1000001] = {" ", };
    scanf("%s", s);
    
    int arr[27] = {0, };
    int time = strlen(s);
    for(int i=0; i<time; i++){
        if(s[i]>='a' && s[i]<='z')
            arr[s[i]-'a']++;
        if(s[i]>='A' && s[i]<='Z')
            arr[s[i]-'A']++;
    }
    
    int max = 0;
    int cnt = 0;
    bool flag = true;
    for(int i = 0; i<26; i++){
        
        if(max == arr[i]){
            flag = false;
        }
        
        if(max < arr[i]){
            max = arr[i];
            cnt =i;
            flag = true;
        }
        
    }
    
    if(flag == false)
        printf("?");
    else
        printf("%c\n" , cnt+'A');
}
