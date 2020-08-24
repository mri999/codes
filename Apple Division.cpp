#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[3],i;
        ll sum=0;
        for(i=0;i<n;i++)
        {
            a[i]=pow(2,i+1);
            sum+=a[i];
        }
        sort(a,a+n);
        ll set1[n/2],set2[n/2];
        ll curr1=a[n-1],curr2=a[n-2],k,j;
        set1[0]=a[n-1];
        set2[0]=a[n-2];
        for(i=n-3,j=1,k=1;i>=0 && j<n/2 && k<n/2;i--,j++,k++)
        {
            if(abs(curr1+a[i]-curr2)>=abs(curr2+a[i]-curr1))
            {
                set1[j]=a[i];
                curr2+=a[i];
            }
            else
            {
                set2[k]=a[i];
                curr1+=a[i];
            }
        }
        while(j<n/2)
        {
            set1[j++]=a[j];
            curr1+=a[j];
        }
        while(k<n/2)
        {
            set2[k++]=a[k];
            curr2+=a[k];
        }
        cout<<abs(curr1-curr2)<<endl;
    }
    return 0;
}
