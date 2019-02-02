#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,even=0,odd=0,sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
        sum=sum+a[i];
    }
    if(sum%2==0)
        cout<<even;
    else
        cout<<odd;
    return 0;
}
