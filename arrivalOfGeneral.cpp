#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,pos1=0,pos2=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int ma=0,mi=a[0];
    for(i=1;i<=n;i++)
    {
        if(ma<=a[i] && pos1<i)
        {
            pos1=i;
            ma=a[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        if(mi>=a[i] && pos2<i)
        {
            mi=a[i];
            pos2=i;
        }
    }
    int sum1=abs(pos1-1);
    int sum2=abs(pos2-n);
    cout<<sum1+sum2;
    return 0;
}
