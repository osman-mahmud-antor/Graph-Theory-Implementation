#include<bits/stdc++.h>
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;


int adj[100][100];
int color[100];

int node;
int edge;

void dfsVisit(int x){
    color[x]=GRAY;
    for(int i=0;i<node;++i){
        if(adj[x][i]==1){
            if(color[i]==WHITE){
                dfsVisit(i);
            }
        }
    }
}

void dfs(){
    for(int i=0;i<node;++i){
        color[i]=WHITE;
    }
    for(int i=0;i<node;++i){
        if(color[i]==WHITE){
            dfsVisit(i);
        }
    }
}



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
    dfs();
}
