#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb push_back
#define vi vector<int>

int main()
{
    ll n,i,j;
    cin>>n;
    vector<ll> dp(n+1,0);
    dp[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=6 && i-j>=0;j++)
        {
            (dp[i]+=dp[i-j])%=mod;
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}
