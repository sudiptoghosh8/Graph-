#include<bits/stdc++.h>
using namespace std;
int adj[100][100];
int main()
{
freopen("input.txt","r",stdin);
freopen("write.txt","w",stdout);
    int n,i,e,a,b;
    while(cin>>n>>e)
{
    for(i=0;i<e;i++)
    {
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }

    for(int j=0;j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            cout<<adj[j][k]<<"  ";
        }
        cout<<endl;
    }
}

return 0;
}
