#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x;
    cin>>n>>x;
    ll a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<ll,ll> m;
    ll curr=0,res=0;
    for(i=0;i<n;i++)
    {
        curr+=a[i];
        if(curr==x)
        {
            res++;
        }
        if(m.find(curr-x)!=m.end())
        {
            res+=m[curr-x];
        }
        m[curr]++;
    }
    cout<<res<<endl;
}
