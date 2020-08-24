#include<bits/stdc++.h>
#define ll long long
#define m 1000000007
using namespace std;

void multiply(ll F[2][2],ll M[2][2])
{
    ll x=(F[0][0]*M[0][0])%m+(F[0][1]*M[1][0])%m;
    x%=m;
    ll y=(F[0][0]*M[0][1])%m+(F[0][1]*M[1][1])%m;
    y%=m;
    ll z=(F[1][0]*M[0][0])%m+(F[1][1]*M[1][0])%m;
    z%=m;
    ll w=(F[1][0]*M[0][1])%m+(F[1][1]*M[1][1])%m;
    w%=m;
    F[0][0]=x%m;
    F[0][1]=y%m;
    F[1][0]=z%m;
    F[1][1]=w%m;
}
void power(ll F[2][2],ll n)
{
    if(n==0 || n==1)
        return ;
    ll M[2][2]={{1,1},{1,0}};
    power(F,n/2);
    multiply(F,F);
    if(n%2==1)
    {
        multiply(F,M);
    }
}

ll fib(ll n)
{
    ll F[2][2]={{1,1},{1,0}};
    if(n==0)
        return 0;
    power(F,n-1);
    return F[0][0]%m;
}

int main()
{
    ll n;
    cin>>n;
    ll ans=fib(n);
    cout<<(ans)%m<<endl;
}
