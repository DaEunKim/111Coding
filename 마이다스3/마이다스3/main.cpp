//
//  main.cpp
//  마이다스3
//
//  Created by 김다은 on 2017. 9. 30..
//  Copyright © 2017년 김다은. All rights reserved.
//

#include <iostream>
using namespace std;
#include <stdio.h>
#define TRUE 1
#define FALSE 0

#define VERTICES 1000
#define INF 1000L

int graph[1000][1000];

int selected[VERTICES];
int dist[VERTICES];

// 최소 dist[v] 값을 갖는 정점을 반환
int get_min_vertex(int n)
{
    int v=0,i;
    
    for (i = 0; i <n; i++)
    {
        if (!selected[i])
        {
            v = i;
            break;
        }
    }
    // 선택하지 않은 간선들 중 최소 가중치값을 갖는 정점을 찾는다.
    for (i = 0; i < n; i++)
    {
        if( !selected[i] && (dist[i] < dist[v]))
            v = i;
    }
    
    return (v);
}


void prim(int s, int n)
{
    int i, u, v;
    
    for(u=0;u<n;u++)
        dist[u]=INF;
    
    dist[s]=0;
    for(i=0;i<n;i++)
    {
        u = get_min_vertex(n);
        selected[u]=TRUE;
        if( dist[u] == INF ) return;
        
        
        for( v=0; v<n; v++)
        {
            if( graph[u][v]!= INF)
            {
                if( !selected[v] && graph[u][v]< dist[v] )
                    dist[v] = graph[u][v];
            }
        }
    }
    cout<< u<<endl;
}

int main(void){
    int n, m;
    cin >> n >> m;
    
    for(int z = 0;z<m;z++){
        int A, B;
        int C;
        
        cin >>A >>B>> C;
        for(int i = A;i<=B;i++){
            graph[A][B] = C;
        }
    }
    
    

    prim(0, VERTICES);
}









