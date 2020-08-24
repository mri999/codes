#include <bits/stdc++.h>
#define ll long long int
#define li long int
#define ld long double
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll res=0;
    ll sum=0;
    unordered_map<ll,ll> m;
    m[0]=1;
    for(ll i=0;i<n;i++)
    {
        sum+=a[i];
        ll rem=(sum%n + n)%n;
        if(rem < 0)
        {
            res+=n;
        }
        if(m.find(rem)!=m.end())
        {
            res+=m[rem];
        }
        m[rem]++;
    }
    cout<<res<<endl;
    return 0;
}

