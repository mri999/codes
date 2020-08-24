#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll sum=(n*(n+1))/2;
    if(sum%2==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        ll temp=sum/2,i;
        vector<ll> set1;
        vector<ll> set2;
        set1.push_back(n);
        bool visited[n+1]={false};
        visited[n]=true;
        ll curr_sum=0;
        for(i=n-1;i>=1;i--)
        {
            ll curr=set1.back();
            curr_sum+=curr;
            if(curr_sum+i>temp)
            {
                ll pos=temp-curr_sum;
                if(pos!=0)
                {
                    set1.push_back(pos);
                    visited[pos]=true;
                }
                break;
            }
            else if(curr_sum+i==temp)
            {
                set1.push_back(i);
                visited[i]=true;
            }
            else
            {
                set1.push_back(i);
                visited[i]=true;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(visited[i]==false)
            {
                set2.push_back(i);
            }
        }
        cout<<set1.size()<<endl;
        for(i=0;i<set1.size();i++)
        {
            cout<<set1[i]<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(i=0;i<set2.size();i++)
        {
            if(set2[i]>0)
            {
                cout<<set2[i]<<" ";
            }
        }
        cout<<endl;
    }
}
