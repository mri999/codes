#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define mod 1000000007
#define vi vector<int>

vi lis[1000001];
int vis[1000001];
int maxD,maxNode;

void dfs(int node , int d)
{
    vis[node]=1;
    if(d>maxD)
    {
        maxD=d;
        maxNode=node;
    }
    for(int x:lis[node])
    {
        if(vis[x]==0)
        {
            dfs(x,d+1);
        }
    }
}

int main()
{
    int n,a,b,i;
    cin>>n;
    for(i=1;i<=n-1;i++)
    {
        cin>>a>>b;
        lis[a].pb(b);
        lis[b].pb(a);
    }
    maxD= -1;
    dfs(1,0);
    for(i=1;i<=n;i++)
    {
        vis[i]=0;
    }
    maxD= -1;
    dfs(maxNode,0);
    cout<<maxD<<endl;
}
