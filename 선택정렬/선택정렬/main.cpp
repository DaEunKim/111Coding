//
//  main.cpp
//  선택정렬
//
//  Created by 김다은 on 2017. 9. 19..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void swap(int &a, int&b) {
    int tmp = a;
    a = b;
    b = tmp;
}
//char score(vector<int> v){
//    //F D D+ C C+ B B+ A A+
//    int size = v.size();
//    string s[10] = {'F', 'D', 'D+', 'C', 'C+', 'B', 'B+', 'A', 'A+', 'A+'};
//    return *s;
//}

void selectionSort(vector<int> &v) {
    int size = v.size();
    
    for (int i=0; i<size; i++) {
        int max = -1;
        int maxIt = -1;
        
        for (int j=0; j<size-i; j++) {
            if (max < v[j]) {
                max = v[j];
                maxIt = j;
            }
        }
        
        swap(v[maxIt], v[size-1-i]);
    }
}

int main(void){
    //10 41 31 48 97 9 65 27 29 13 15
    vector<int> v;
    vector<int> tmp;
    vector<string> save(10);
    
    int n;
    cin >> n;
    
    int value = 0;
    for(int i = 0;i<n;i++){
        cin >> value;
        v.emplace_back(value);
    }
    tmp = v;

    selectionSort(v);
    
    vector<string> tmp2 = {"F","D", "D+", "C", "C+", "B", "B+", "A", "A+", "A+"};
    
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i]==tmp[j]){
                save[j] = tmp2[i];
            }
            
        }
    }
    
    for (auto i : save)
        cout << i << " ";
    cout<<endl;

    
    
    
    
}
