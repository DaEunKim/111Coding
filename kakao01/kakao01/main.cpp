//
//  main.cpp
//  kakao01
//
//  Created by 김다은 on 2017. 8. 5..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstdio>
#include <deque>
#define SIZE 101
using namespace std;
//
//#include <iostream>
//#include <vector>
//#include <list>
//#include <queue>
//
//using namespace std;
//
//const int V=5;
//vector<list<int> > a(V);
//
//int BFS(int s)
//{
//    int visited[V]={0};
//    queue<int> Q;
//    visited[s]=1;
//    Q.push(s);
//    while(!Q.empty())
//    {
//        int x=Q.front();
//        Q.pop(); // pop here. we have x now
//        
//        vector<list<int> >::iterator it1=a.begin()+x;
//        list<int> it2=*it1;
//        list<int>::iterator iter=it2.begin();
//        while(iter!=it2.end())
//        {
//            if(visited[*iter]==0)
//            {
//                visited[*iter]=1;
//                Q.push(*iter);
//            }
//            ++iter;
//        }
//        
//        visited[x]=2; // set visited here.
//    }
//    return 0;
//}
//
//void addEdge(int i, int j)
//{
//    a[i].push_back(j);
//    a[j].push_back(i);
//}
//
//int main() {
//    vector<list<int> >::iterator it1=a.begin();
//    addEdge(0,1);
//    addEdge(0,2);
//    addEdge(2,1);
//    while(it1!=a.end())
//    {
//        list<int> it2=*it1;
//        list<int>::iterator iter=it2.begin();
//        while(iter!=it2.end())
//        {
//            cout<<*iter<<" ";
//            iter++;
//        }
//        cout<<endl;
//        it1++;
//    }
//    cout<<BFS(0);
//    return 0;
//}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    
    vector<int> v1 = {1,1,1,0};
    vector<int> v2 = {1,2,2,0};
    vector<int> v3 = {1,0,0,1};
    vector<int> v4 = {0,0,0,1};
    vector<int> v5 = {0,0,0,3};
    vector<int> v6 = {0,0,0,3};
    
    picture.push_back(v1);
    picture.push_back(v2);
    picture.push_back(v3);
    picture.push_back(v4);
    picture.push_back(v5);
    picture.push_back(v6);
    

    
    return answer;
}

void DFS(int x, int y, int l)
{
    int min;
    // 도착 지점에 도착했을 경우
    if (x == m - 1 && y == n - 1)
    {
        // 현재 최소값이 l보다 크면, l이 작은 것이므로 l를 최소값으로 지정
        if (min > l) min = l;
        return;
    }
    map[x][y] = 0; // 방문했음을 표시하기 위해 0을 대입
    
    // 왼쪽 이동할 수 있다면 이동!
    if (x > 0 && map[x - 1][y] != 0)
        DFS(x - 1, y, l + 1);
    // 오른쪽 이동할 수 있다면 이동!
    if (x < m - 1 && map[x + 1][y] != 0)
        DFS(x + 1, y, l + 1);
    // 아래로 이동할 수 있다면 이동!
    if (y > 0 && map[x][y - 1] != 0)
        DFS(x, y - 1, l + 1);
    // 위로 이동할 수 있다면 이동!
    if (y < n - 1 && map[x][y + 1] != 0)
        DFS(x, y + 1, l + 1);
    
    map[x][y] = 1; // 지나간 자리를 원상태로 되돌리기 위해 1을 대입
}



int main(void){
    int m, n, min;
    solution(6, 4, picture);
    
    DFS(0, 0, 1); // DFS 시작!
    
    printf("최단 거리: %d\n", min);
    
    

}

