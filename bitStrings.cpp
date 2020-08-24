#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007

ll power(ll a,ll b,ll c)
{
    if(b==0)
    {
        return 1;
    }
    if(a==0)
    {
        return 0;
    }
    ll ans;
    if(b%2==0)
    {
        ll small=power(a,b/2,c);
        ans=(small*small)%c;
    }
    else
    {
        ll small=power(a,b-1,c);
        ans=a%c;
        ans=(ans*small)%c;
    }
    return (ans+c)%c;
}

int main()
{
    ll n;
    cin>>n;
    ll ans=power(2,n,m);
    cout<<ans<<endl;
}
