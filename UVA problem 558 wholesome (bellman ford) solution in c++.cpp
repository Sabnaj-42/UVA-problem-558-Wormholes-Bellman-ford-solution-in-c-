#include<bits/stdc++.h>
using namespace std;
int inf=100000000;
struct node
{
    int a,b,c;
};
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        struct node graph[m+1];
        int dist[n+1];
        for(int i=0;i<n;i++)dist[i]=inf;
        for(int i=0;i<m;i++)
        {
            cin>>graph[i].a>>graph[i].b>>graph[i].c;
        }
        dist[graph[0].a]=0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(dist[graph[j].a]!=inf)
               {
                   dist[graph[j].b]=min(dist[graph[j].b],dist[graph[j].a]+graph[j].c);
               }
            }
        }
        int f=0;
        for(int i=0;i<m;i++)
        {
            if(dist[graph[i].a]!=inf)
            {
               if(dist[graph[i].b]>dist[graph[i].a]+graph[i].c)
               {
                   f=1;break;
               }
            }
        }
        if(f==1)cout<<"possible"<<endl;
            else cout<<"not possible"<<endl;
    }
}
