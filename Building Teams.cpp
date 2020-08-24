#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define mod 1000000007
#define vi vector<int>

vi lis[100001];
int vis[100001];
int col[100001];

bool dfs(int node,int c)
{
    vis[node]=1;
    col[node]=c;
    for(int x:lis[node])
    {
        if(vis[x]==0)
        {
            bool res=dfs(x,c^1);
            if(res==false)
                return false;
        }
        if(col[node]==col[x])
            return false;
    }
    return true;
}
int main()
{
    int n,m,a,b,i;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        lis[a].pb(b);
        lis[b].pb(a);
    }
    int fla=true;
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            bool res=dfs(i,0);
            if(res==false)
                fla=false;
        }
    }
    if(fla==false)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(col[i]==0)
            {
                cout<<1<<" ";
            }
            else
            {
                cout<<2<<" ";
            }
        }
    }
}
