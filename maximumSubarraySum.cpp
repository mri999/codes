#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;cin>>n;
    ll a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll curr=a[0],ans=a[0];
    for(i=1;i<n;i++)
    {
        curr=max(a[i],a[i]+curr);
        ans=max(ans,curr);
    }
    cout<<ans<<endl;
}
