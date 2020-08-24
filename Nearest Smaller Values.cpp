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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans[n];
    int idx=1;
    stack<ll> s;
    s.push(0);
    ans[0]=0;
    for(int i=1;i<n;i++)
    {
        while(!s.empty() && a[s.top()] >= a[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            ans[idx++]=0;
        }
        else
        {
            ans[idx++]=s.top()+1;
        }
        s.push(i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
