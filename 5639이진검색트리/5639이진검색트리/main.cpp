//
//  main.cpp
//  5639이진검색트리
//
//  Created by 김다은 on 26/03/2019.
//  Copyright © 2019 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node{
    Node(int v)
    {
        value = v;
    }
    
    int value;
    Node *left;
    Node *right;
};

void preOrder(Node *root)
{
    if(root!=NULL)
    {
        cout<< root->value <<endl;
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if(root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<< root-> value <<endl;
    }
}

int main(int argc, const char * argv[])
{
    int n;
    int data[10001] = {0, };
    int cnt = 0;
    Node node(0);
    
    while (1)
    {
        cin >> n;
        if(n==0)
            break;
        
        
        data[cnt] = n; //root, left, right 순서
        node.left = new Node(n);
        node.right = new Node(n);
        
        node.left->value = n;
        
        postOrder(&node);
        
        cnt++;
    }
    //node.name = data[0];
    
    for(int i =0;i<cnt;i++){
        postOrder(&node);
    }
    
}
