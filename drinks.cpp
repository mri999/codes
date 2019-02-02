#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n],i;
    float sum=0;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
        sum=sum+p[i];
    }
    sum=sum/n;
    cout<<setprecision(15)<<sum;
    return 0;
}
