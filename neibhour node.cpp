#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int main()
{
freopen("input.txt","r",stdin);

     int node,edge,i,a,b;
     while(cin>>node>>edge)
     {
         for(i=0;i<edge;++i)
         {
             cin>>a>>b;
             adj[a][b]=1;
             adj[b][a]=1;
         }

         for(int j=0;j<node;++j)
         {
             if(adj[0][j]==1)
             {
                 cout<<j<<" ";
             }
         }

     }

     return 0;
}
