//
//  main.cpp
//  9498시험성적
//
//  Created by 김다은 on 2017. 12. 26..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

int main(void){
    int score = 0;
    cin >> score;
    
    if(score<=100 and score >=90)
        cout<< "A"<<endl;
    else if(score <=89 and score >=80 )
        cout<< "B" <<endl;
    else if(score <=79 and score >=70 )
        cout<< "C" <<endl;
    else if(score <=69 and score >=60 )
        cout<< "D" <<endl;
    else
        cout<<"F"<<endl;

}
