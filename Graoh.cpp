#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nod,edg, i,j,a,b;
    while(cin>>nod>>edg)
    {
        vector<int>v[nod+5];
        for(i=1;i<=edg;i++)
        {
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        for(i=1;i<=nod;i++)
        {
            cout<<"Node "<<i<<" : ";
            for(j=0;j<v[i].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}
