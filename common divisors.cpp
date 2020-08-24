#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;

ll gcd(ll a,ll b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    ll n;
    cin>>n;
    ll a[n],i;
    ll maxi=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    ll divisors[maxi+1]={0};
    for(i=0;i<n;i++)
    {
        divisors[a[i]]++;
    }
    ll ans=0;
    for(i=maxi;i>=1;i--)
    {
        ll j=i;
        ans=0;
        while(j<=maxi)
        {
            if(divisors[j]==2)
            {
                cout<<j<<endl;
                return 0;
            }
            else if(divisors[j]>1)
            {
                 ans++;
            }
            j+=i;
            if(ans==2)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
    return 0;
}
