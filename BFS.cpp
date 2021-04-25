#include<bits/stdc++.h>
using namespace std;
vector<int>G[120];
int visited[110];
int level[110];
void zero(int n)
{
    for(int i=0; i<=n+5; i++)
    {
        visited[i]=0;
        level[i]=0;
        G[1].clear();
    }
}
void bfs(int u)
{
    level[u]=0;
    visited[u]=1;
    queue<int>Q;
    Q.push(u);
    while(!Q.empty())
    {
        u = Q.front();
        for(int i=0; i<G[u].size(); i++)
        {
            int v = G[u][i];
            if(visited[v]==0)
            {
                visited[v]=1;
                level[v]=level[u]+1;
                Q.push(v);
            }
        }
        Q.pop();
    }
}
int main()
{
    int n,e,i,a,b;

    while(scanf("%d%d",&n,&e)==2)
    {
    zero(n);
    for(i=1;i<=e;i++)
    {
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    bfs(1);
    for(i=1;i<=n;i++)
    {
        cout<<"Level "<<i<<" = "<<level[i]<<endl;
    }
}
    return 0;
}
