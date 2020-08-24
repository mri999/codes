#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length(),i;
    int start=0,len=1;
    for(i=1;i<n;i++)
    {
        int l=i-1;
        int r=i;
        while(l>=0 && r<n && s[l]==s[r])
        {
            if(r-l+1>len)
            {
                len=r-l+1;
                start=l;
            }
            l--;
            r++;
        }
        l=i-1;
        r=i+1;
        while(l>=0 && r<n && s[l]==s[r])
        {
            if(r-l+1>len)
            {
                len=r-l+1;
                start=l;
            }
            l--;
            r++;
        }
    }
    string ans="";
    for(i=start;i<=start+len-1;i++)
    {
        ans+=s[i];
    }
    cout<<ans<<endl;
}
