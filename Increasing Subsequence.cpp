#include<bits/stdc++.h>
using namespace std;

int ceilIdx(int tail[],int l,int h,int ele)
{
    while(h>l)
    {
        int mid=l+(h-l)/2;
        if(tail[mid]>=ele)
        {
            h=mid;
        }
        else
        {
            l=mid+1;
        }
    }
    return h;
}

int LISoptimized(int a[],int n)
{
    int tail[n];
    int i,len=1;
    tail[0]=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>tail[len-1])
        {
            tail[i]=a[i];
            len++;
        }
        else
        {
            int c=ceilIdx(tail,0,len-1,a[i]);
            tail[c]=a[i];
        }
    }
    return len;
}

int main()
{
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=LISoptimized(a,n);
        cout<<ans<<endl;
}
