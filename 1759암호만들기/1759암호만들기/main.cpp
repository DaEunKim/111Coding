//
//  main.cpp
//  1759암호만들기
//
//  Created by 김다은 on 2018. 4. 12..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int L,C;
char alpha[15];
char vis[15];
int vowel_cnt = 0;//모음 aeiou
int consonant_cnt = 0;//자음

void dfs(int start, int depth){
    if(depth == L){
        if(vowel_cnt<1 || consonant_cnt<2)
            return;
        for(int i = 0;i<L;i++){
                cout<<vis[i];
        }
        cout<<endl;
        return;
    }
    for(int i = start;i<C;i++){
        vis[depth] = alpha[i];
        if(vis[depth]=='a' || vis[depth]=='e' || vis[depth]=='i' || vis[depth]=='o' || vis[depth]=='u'){
            vowel_cnt++;
        }
        else{
            consonant_cnt++;
        }
        dfs(i+1, depth+1);
        if(vis[depth]=='a' || vis[depth]=='e' || vis[depth]=='i' || vis[depth]=='o' || vis[depth]=='u'){
            vowel_cnt--;
        }
        else{
            consonant_cnt--;
        }

    }
}

int main(int argc, const char * argv[]) {
    cin >> L>>C;
    
    for(int i = 0;i<C;i++){
        cin >> alpha[i];
    }
    sort(alpha, alpha+C);
    dfs(0, 0);
    
    return 0;
}
