#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ll n=17;
    vector<int> dp(n+1,1e9); // dp array to store steps
    dp[0]=0; // we can get 0 in zero steps
    for(ll i=0;i<=n;i++)
    {
        for(char c : to_string(i))
        {
            dp[i]=min(dp[i],dp[i-(c-'0')]+1); // either we select the number or not
        }
    }
    cout<<dp[n]<<endl;
}
