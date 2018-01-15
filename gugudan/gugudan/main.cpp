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
    
    for(int i = 2;i<10;i++){
        for(int j = 1;j<10;j++){
            cout<< i<<"X"<<j<<"="<<i*j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 1;i<10;i++){

        for(int j = 1;j<10;j++){
            cout<< j<<"X"<<i<<"="<<j*i<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i = 1;i<10;i++){
        if(i%3==1)
            cout<<endl;
        for(int j = 1;j<10;j++){
            cout<< i<<"X"<<j<<"="<<j*i<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    int i, j;
    for(i = 1;i<10;i++){
        for(j= 1;j<10;j++){
            cout<< j<<"X"<<i<<"="<<i*j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    for (int i=0; i<=2; i++) {
        for (int j=1; j<=9; j++) {
            printf("%dX%d=%d\t %dX%d=%d\t %dX%d=%d\n", i*3+1, j, (i*3+1)*j, i*3+2, j, (i*3+2)*j, i*3+3, j, (i*3+3)*j);
        }
        cout<<endl;
    }
    for(int i = 1;i<10;i++){
        for(int j = 1;j<4;j++){
            cout<< j<<"X"<<i<<"="<<j*i<<"    ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 1;i<10;i++){
        for(int j = 4;j<7;j++){
            cout<< j<<"X"<<i<<"="<<j*i<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i = 1;i<10;i++){
        for(int j = 7;j<10;j++){
            cout<< j<<"X"<<i<<"="<<j*i<<"   ";

        }
        cout<<endl;
    }
    cout<<endl;


    for(int i = 9;i<90;i++){
        int a = i/9;
        int b = i%9+1;
        cout<< b << " X "<<a<<" = "<<a*b<<"    ";

        if(b==9){
            cout<<endl;

        }

    }
    cout<<endl;


}
