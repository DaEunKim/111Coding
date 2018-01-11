//
//  main.cpp
//  gugudan
//
//  Created by 김다은 on 2018. 1. 4..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    
//    for(int i = 2;i<10;i++){
//        for(int j = 1;j<10;j++){
//            cout<< i<<"X"<<j<<"="<<i*j<<" ";
//        }
//        cout<<endl;
//    }
//    cout<<endl;
    
    for(int i = 1;i<10;i++){
        int j = 1;
        if(j%3==1){
            for(j = 1;j<10;j++){
                cout<< j<<"X"<<i<<"="<<j*i<<"   ";
            }
        }
            cout<<endl;
        
//        if(i%9!=0)
            cout<<endl;
    }
    cout<<endl;
    
    
//    for(int i = 9;i<90;i++){
//        int a = i/9;
//        int b = i%9+1;
//        cout<< b << " X "<<a<<" = "<<a*b<<"    ";
//        if(b==9){
//            cout<<endl;
//
//        }
//
//    }
//    cout<<endl;
//

}
