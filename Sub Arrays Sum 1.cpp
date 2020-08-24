#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int a[n],i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    map<int,int> m;
    int curr_sum=0,res=0;
    for(i=0;i<n;i++)
    {
        curr_sum+=a[i];
        if(curr_sum==x)
        {
            res++;
        }
        if(m.find(curr_sum-x)!=m.end())
        {
            res+=m[curr_sum-x];
        }
        m[curr_sum]++;
    }
    cout<<res<<endl;
    return 0;
}
