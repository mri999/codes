#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define mod 1000000007
#define vi vector<int>

vi lis[100001];
int vis[100001];
int dis[100001];
int curr_cc;

void dfs(int node)
{
    vis[node]=1;
    dis[node]=curr_cc;
    for(int x:lis[node])
    {
        if(!vis[x])
        {
            vis[x]=1;
            dfs(x);
        }
    }
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
    int ans=0;
    map<int,int> sol;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            curr_cc++;
            dfs(i);
            ans++;
        }
    }
    vi roads;
    for(i=1;i<=n;i++)
    {
        if(sol.find(dis[i])==sol.end())
        {
            sol[dis[i]]=i;
            roads.pb(i);
        }
    }
    cout<<ans-1<<endl;
    for(int i=0;i<roads.size()-1;i++)
    {
        cout<<roads[i]<<" "<<roads[i+1]<<endl;
    }
    return 0;
}
