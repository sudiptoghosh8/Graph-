#include<bits/stdc++.h>
using namespace std;
int visited[100];
int level[100];
int parent[100];
vector<int>G[110];
void zero(int n)
{
    for(int i=0; i<=n+5; i++)
    {
        parent[i]=0;
        visited[i]=0;
        level[i]=0;
        G[1].clear();
    }
}

void bfs(int u)
{
    parent[u]=-1;
    level[u]=0;
    visited[u]=1;
    queue<int>Q;
    Q.push(u);
    while(!Q.empty())
    {
        u = Q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            int v= G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                parent[v]=u;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
        Q.pop();
    }

}

int main()
{
    int nod,edg,i,j,a,b,n,e;
    while(scanf("%d%d",&n,&e)==2)
    {
        zero(n);//node

        for(i=1; i<=e; i++)
        {
            cin>>a>>b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        /*for(i=1;i<=nod;i++)
        {
            cout<<"Node "<<i<<" : ";
            for(j=0;j<G[i].size();j++)
            {
                cout<<G[i][j]<<" ";
            }
            cout<<endl;
        }
        */

        bfs(1);
        cout<<endl<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<"Level "<<i<<" = "<<level[i]<<endl;
        }
        cout<<endl<<endl;
        for(i=1;i<=n;i++)
        {
            cout<<"Parent "<<i<<" = "<<parent[i]<<endl;
        }



    }


}

