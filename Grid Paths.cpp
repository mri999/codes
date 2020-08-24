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
    vector<vector<ll > > dp(n,vector<ll>(n,0));
    dp[0][0]=1;
    for(i=0;i<n;i++)
    {
        string row;
        cin>>row;
        for(j=0;j<n;j++)
        {
            if(row[j]=='.')
            {
                if(i>0)
                {
                    (dp[i][j]+=dp[i-1][j])%=mod;
                }
                if(j>0)
                {
                    (dp[i][j]+=dp[i][j-1])%=mod;
                }
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }
    cout<<dp[n-1][n-1]<<endl;
    return 0;
}
