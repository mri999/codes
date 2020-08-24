#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
//#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
//#define cases int t ;cin>>t ;while(t--)
using namespace std;

vector<int> lis[200001];
bool vis[200001];

void dfs(int node,vector<int> &ans)
{
    vis[node]=true;
    int subords=0;
    for(int x:lis[node])
    {
        if(vis[x]==false)
        {
            dfs(x,ans);
            subords+=1+ans[x];
        }
    }
    ans[node]=subords;
}

int main()
{
    int n,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        vis[i]=false;
    }
    for(int i=2;i<=n;i++)
    {
        cin>>a;
        lis[a].pb(i);
        lis[i].pb(a);
    }
    vector<int> ans(n+1);
    dfs(1,ans);
    for(int i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
