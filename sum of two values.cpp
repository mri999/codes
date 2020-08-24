#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<pair<int,int> > a(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>a[i].first;
        a[i].second=i+1;
    }
    sort(a.begin(),a.end());
    int l=0,r=n-1;
    while(l<r)
    {
        if(a[l].first + a[r].first==x)
        {
            cout<<a[l].second<<" "<<a[r].second<<endl;
            return 0;
        }
        else if(a[l].first + a[r].first<x)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;

}
