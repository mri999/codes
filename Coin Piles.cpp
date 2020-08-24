#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007

bool solve(ll a,ll b)
{
    if(a<b)
        swap(a,b);
    if(a>2*b)
        return false;
    if((a+b)%3==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        bool ans=solve(a,b);
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
