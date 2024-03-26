
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes;
    cin>> nodes;
    int graph [nodes][nodes];

    for(int i=0; i<nodes; i++){
        for( int j=0;j<nodes; j++){
            if(i==j) graph[i][j]=0;
            else graph [i][j]= INT_MAX;
        }
    }
    int edges;
    cin>> edges;
    for (int i=0; i<edges; i++){
        int a, b, w;
        cin>> a>> b>> w;
        graph[a][b]= w;
    }
    cout << "initial adjacency matrix:"<< endl;
    for(int i=0; i<nodes; i++){
        for (int j=0; j<nodes; j++){
            if (graph[i][j]== INT_MAX)
                cout << "X ";
            else
                cout << graph[i][j] << " ";

        }
        cout << endl;
    }
}

