#include<bits/stdc++.h>
using namespace std;

int adj[100][100];

int node;
int edge;


int main()
{
    cin>>node>>edge;

    int n1,n2;
    for(int i=0;i<edge;++i){
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    for(int i=0;i<node;++i){
        for(int j=0;j<node;++j){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
5 6
0 1
0 2
1 2
1 3
1 4
3 4
*/
