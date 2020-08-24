#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;
#define ll long long
#define maxi 500001

ll pre[maxi];

ll solve(ll n)
{
    ll i,j;
    ll ans=1;
    bool p[n+1];
    memset(p,true,sizeof(p));
    for(i=2;i*i<=n;i++)
    {
        if(p[i]==true)
        {
            for(j=i*i;j<=n;j+=i)
            {
                p[j]=false;
            }
        }
    }
    vector<ll> prime;
    for(i=2;i<=n;i++)
    {
        if(p[i]==true)
        {
            prime.push_back(i);
        }
    }
    map<ll,ll> sol;
    for(i=0;i<prime.size();i++)
    {
        int c=0;
        while(n%prime[i]==0)
        {
            c++;
            n=n/prime[i];
        }
        sol[prime[i]]=c;
    }
    map<ll,ll> :: iterator it;
    for(it=sol.begin();it!=sol.end();it++)
    {
        ll curr=((pow(it->first,it->second+1)-1))/((it->first-1));
        ans*=curr;
        ans%=m;
    }
    return ans%m;
}

void precal()
{
    ll i;
    pre[0]=0;
    for(i=1;i<maxi;i++)
    {
        pre[i]=solve(i);
    }
    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i;
    cin>>t;
    precal();
    while(t--)
    {
        ll n;
        cin>>n;
        ll ans=pre[n-1];
        cout<<(ans-n)%m<<endl;
    }
    return 0;
}
