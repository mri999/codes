#include <bits/stdc++.h>
#define ll long long int
#define li long int
#define ld long double
using namespace std;
const ll mod = 1e9 + 7;

unordered_map<ll,ll> dp;

int main()
{
    ll n;
    cin>>n;
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i&(i-1)]+1;
    }
    ll ans=0;
    for(auto x:dp)
    {
        ans+=x.second;
    }
    cout<<ans<<endl;
}
