#include<bits/stdc++.h>
using namespace std;
int main(){
    int node;
    cin>>node;
    int graph[node][node];
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
           if(i==j)
            graph[i][j]=0;
            else
                graph[i][j]=99999;
           }
        }
    int edge;
    cin>>edge;
    int a,b,w;
    for(int  i=0;i<edge;i++){
         cin>>a>>b>>w;
         graph[a][b]=w;
         graph[b][a]=w;
    }
    int visited[node]= {0};
    visited[0] = 1;
    for(int i=0; i<node-1; i++)
    {
        int min_sourceNode = -1;
        int min_node = -1;
        int min_weight = 99999;
        for(int nd=0; nd<node; nd++)
        {
            if(visited[nd]==1)
            {
                for(int j=0; j<node; j++)
                {
                    if(graph[nd][j]<min_weight && visited[j]==0)
                    {
                        min_sourceNode = nd;
                        min_node = j;
                        min_weight = graph[nd][j];
                    }
                }
            }
        }
        visited[min_node]=1;
        cout<<min_sourceNode<<"-"<<min_node<<": "<<min_weight<<endl;
    }
}
