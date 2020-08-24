#include<bits/stdc++.h>
using namespace std;

int solve(int x)
{
    int i,ans=0;
    for(i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            if(x/i==i)
                ans++;
            else
                ans+=2;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int ans=solve(x);
        cout<<ans<<endl;
    }
}
