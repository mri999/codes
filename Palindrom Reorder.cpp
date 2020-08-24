#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007

int main()
{
    string s;
    cin>>s;
    ll n=s.length(),i;
    ll fre[26]={0};
    for(i=0;i<n;i++)
    {
        fre[s[i]-'A']++;
    }
    ll odd=0;
    for(i=0;i<26;i++)
    {
        if(fre[i]%2==1)
        {
            odd++;
        }
        if(odd>1)
        {
            cout<<"NO SOLUTION"<<endl;
            return 0;
        }
    }
    char ans[n];
    ll low=0,high=n-1;
    for(i=0;i<26;i++)
    {
        if(fre[i]!=0)
        {
            char c=i+'A';
            int temp=fre[i];
            while(temp>0)
            {
                ans[low++]=c;
                ans[high--]=c;
                temp-=2;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(ans[i]>='A' && ans[i]<='Z')
        {
            cout<<ans[i];
        }
    }
    return 0;
}
