#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,eadge,i,j,a,b,n;

    while(cin>>node>>eadge)
    {
        vector<int>graph[node+5];
        for(i=1;i<=node;i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        for(i=1;i<=node;i++)
        {
            cout<<"Node "<<i<<" : ";
            for(j=0;j<graph[i].size();j++)
            {
                cout<<graph[i][j]<<" ";
            }
            cout<<endl;
        }

    }


    return 0;
}
