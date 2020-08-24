#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n)
{
    ll res=0;
    for(ll i=5;n/i>=1;i=5*i)
    {
        res+=n/i;
    }
    return res;
}

int main()
{
    ll n;
    cin>>n;
    ll ans=solve(n);
    cout<<ans<<endl;
}
