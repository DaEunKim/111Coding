//
//  main.cpp
//  1991트리순회
//
//  Created by 김다은 on 2018. 1. 9..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

struct tnode {
    int data;
    struct tnode * left_child;
    struct tnode * right_child;
};
typedef struct tnode node;
typedef node * tree_ptr;

void Preorder(tnode* p){
    if(p == NULL) return;
    printf("%d",p->data);
    Preorder(p->left_child);
    Preorder(p->right_child);
}

void Inorder(tnode* p){
    if(p == NULL) return;
    Inorder(p->left_child);
    printf("%d",p->data);
    Inorder(p->right_child);
}

void Postorder(tnode* p){
    if(p == NULL) return;
    Postorder(p->left_child);
    Postorder(p->right_child);
    printf("%d",p->data);
}


int main(void){
    int n;
    cin >> n;
    char node[27];
    char left[27];
    char right[27];
    
    for(int i = 0;i<n;i++){
        cin >> node[i];
        cin >> left[i];
        cin >> right[i];
        
    }
    tnode *p;
    for(int i = 0;i<n;i++){
        p->left_child = left[i];
        p->right_child = right[i];

    }
//    Preorder();
//    Inorder();
//    Postorder(node);
}
