#include<bits/stdc++.h>
#define white 1
#define gray 2
#define black 3
using namespace std;

int adj[100][100];
int tim=1;
int stim[100];
int ftim[100];
int color[100];
int node,edge;

void dfsvisit(int x)
{
    color[x]=gray;
    stim[x]=tim;
    ++tim;

    for(int i=0; i<node; ++i)
    {
        if(adj[x][i]=1)
        {
            if(color[i]==white)
            {
                dfsvisit(i);
            }
        }
    }

    color[x]=black;
    ftim[x]=tim;
    ++tim;
}

void dfs()
{
    for(int i=0; i<node; ++i)
    {
        color[i]=white;
    }
    for(int i=0; i<node; ++i)
    {
        if(color[i]==white)
        {
            dfsvisit(i);
        }
    }
}

int main()
{
    freopen("input.txt","r",stdin);
    int i,j,k,a,b;
    int n1,n2;
    while(cin>>node>>edge)
    {
        for(i=0; i<edge; ++i)
        {
            cin>>n1>>n2;
            adj[n1][n2]=1;
            adj[n2][n1]=1;
        }
        dfs();
        cout<<endl;
        for(int i=0; i<node; ++i)
        {
            cout<<"node : "<< (char)('A' + i) <<" "<<stim[i]<<" "<<ftim[i]<<endl;
        }
    }

    return 0;
}

