//
//  main.cpp
//  1991트리순회
//
//  Created by 김다은 on 2018. 1. 9..
//  Copyright © 2018년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;

class Node {
private:
    char Data[27];
    Node* Left;
    Node* Right;
    
public:
    Node(char Data[27]) {
        for(int i = 0;i<27;i++)
            this->Data[i] = Data[i];
        Left = NULL;
        Right = NULL;
        
    }

    void setLeft(Node* Left) {
        this->Left = Left;
    }
    void setRight(Node* Right) {
        this->Right = Right;
    }
    char getData() {
        return *Data;
    }
    Node* getLeft() {
        return Left;
    }
    
    Node* getRight() {
        return Right;
    }
};

class Tree {
private:
    Node* root;
    
public:
    Tree() {
        root = NULL;
    }
    Tree(Node* root) {
        this->root = root;
    }

    void newRoot(Node* root) {
        this->root = root;
    }
    void PreorderPrint(Node* Leaf){
        if (Leaf == NULL)
            return;
        cout << Leaf->getData();
        PreorderPrint(Leaf->getLeft());
        PreorderPrint(Leaf->getRight());
    }
    void InorderPrint(Node* Leaf){
        if (Leaf == NULL) return;
        InorderPrint(Leaf->getLeft());
        cout << Leaf->getData();
        InorderPrint(Leaf->getRight());
    }
    void PostorderPrint(Node* Leaf){
        if (Leaf == NULL) return;
        PostorderPrint(Leaf->getLeft());
        PostorderPrint(Leaf->getRight());
        cout << Leaf->getData();
    }
};

int main(){
    int n;
    cin >> n;
    
    char node_set[27];
    int size = n*3;
    for(int i = 0;i<size;i++){
        cin >> node_set[i];
    }
    for(int i = 0;i<size;i++){
        cout << node_set[i];
    }

    for(int i = 0;i<size;i++){
        Node A('A'), B('B');
        Tree tree(&A);
        
        A.setLeft(&B);


    }
    // 각 노드를 생성한다 (A, B, C, D, E, F, G, H, I)
//    Node A('A'), B('B'), C('C'), D('D'), E('E'), F('F'), G('G'), H('H'), I('I');
//    Tree tree(&A);
    // 트리 객체 생성, A의 주소값을 생성자로 넘긴다. (A가 루트 노드)
    
//    A.setLeft(&B); // A의 왼쪽 자식 노드는 B 노드
//    B.setLeft(&D); // B의 왼쪽 자식 노드는 D 노드
//    D.setLeft(&H); // D의 왼쪽 자식 노드는 H 노드
//    D.setRight(&I); // D의 오른쪽 자식 노드는 I 노드
//    B.setRight(&E); // B의 오른쪽 자식 노드는 E 노드
//    A.setRight(&C); // A의 오른쪽 자식 노드는 C 노드
//    C.setLeft(&F); // C의 왼쪽 자식 노드는 F 노드
//    C.setRight(&G); // C의 오른쪽 자식 노드는 G 노드
    
    for(int i = 0;i<n;i++){
//        tree.PreorderPrint(&node_set[i]); // 전위 순회
//
//        tree.InorderPrint(&node_set[i]); // 중위 순회
//
//        tree.PostorderPrint(&node_set[i]); // 후위 순회
        cout<<endl;

    }
}

