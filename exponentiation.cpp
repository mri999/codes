#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;

ll solve(ll a,ll b,ll c)
{
    ll res=1;
    a=a%c;
    if(b==0)
    {
        return 1;
    }
    while(b>0)
    {
        if(b&1)
        {
            res=(res*a)%c;
        }
        b>>=1;
        a=(a*a)%c;
    }
    return res;
}

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;
        ll ans=solve(a,b,m);
        cout<<ans<<endl;
    }
}
