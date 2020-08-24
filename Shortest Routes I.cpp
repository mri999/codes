#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define mod 1000000007
#define vi vector<int>

struct ede{
    int a;
    int b;
    int w;
};

ede lis[100001];
int par[100001];
vi res;

bool com(ede a,ede b)
{
    if(a.w < b.w)
        return true;
    return false;
}

int fi(int a)
{
    if(par[a]==-1)
        return a;
    return par[a]=fi(par[a]);
}

void join(int a,int b)
{
    par[a]=b;
}


int main()
{
    int n,m,a,b,i;
    cin>>n>>m;

    for(i=1;i<=n;i++)
    {
        par[i]=-1;
    }

    for(i=0;i<m;i++)
    {
        cin>>lis[i].a>>lis[i].b>>lis[i].w;
    }
    sort(lis,lis+m,com);
    for(i=1;i<=n;i++)
    {
        int a=fi(lis[i].a);
        int b=fi(lis[i].b);
        if(a!=b)
        {
            join(a,b);
            res.pb(lis[i].w);
        }
    }
    cout<<res.size()<<endl;
    for(int x:res)
    {
        cout<<x<<" ";
    }
    return 0;
}
