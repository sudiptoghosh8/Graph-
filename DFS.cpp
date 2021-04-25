#include<bits/stdc++.h>
using namespace std;
vector<int>G[100];
int visited[100];
void dfs(int u)
{
    printf("IN %d\n",u);
    visited[u]=1;
    for(int i=0;i<G[u].size();i++)
    {

        int v=G[u][i];
        if(visited[v]==0)
        {
            visited[v]=i;
             printf("Going %d\n",v);
            dfs(v);
             printf("Return to u = %d from v = %d\n",u,v);
        }

    }

}
int main()
{
    int n,e,a,b;
    while(scanf("%d %d",&n,&e)==2)
    {
        for(int i=0;i<e;i++)
        {
            scanf("%d%d",&a,&b);
            G[a].push_back(b);
            G[b].push_back(a);
        }
        int x=1;
        for(int i=1;i<=n;i++)
        {
            printf("\n\nI = %d\n",i);
            if(visited[i]==0)
            {
                printf("tukra = %d\n",x);
                dfs(i);
                x++;
            }
        }







    }

}
/*
11 11
1 2
1 3
1 5
2 4
4 6
6 7
7 3
7 8
8 5
9 10
10 11
*/
