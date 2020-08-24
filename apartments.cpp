#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int app[n],free[m],i;
    for(i=0;i<n;i++)
    {
        cin>>app[i];
    }
    for(i=0;i<m;i++)
    {
        cin>>free[i];
    }
    sort(app,app+n);
    sort(free,free+m);
    int l=0,r=0;
    int ans=0;
    while(l<n && r<m)
    {
        if(abs(app[l]-free[r])<=k)
        {
            l++;
            r++;
            ans++;
        }
        else if(app[l]<free[r])
        {
            l++;
        }
        else
            r++;
    }
    cout<<ans<<endl;
}
