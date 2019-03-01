//
//  main.cpp
//  10871X보다작은수
//
//  Created by 김다은 on 01/03/2019.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n, x;
    cin >> n >> x;
    
    int a[10001] = {0, };
    for(int i = 0;i<n;i++){
        cin >>a[i];
    }
    for(int i = 0; i<n; i++){
        if(a[i]<x)
            cout<< a[i] <<" ";
    }
    cout<<endl;

}
