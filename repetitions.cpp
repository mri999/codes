#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=0,i=0;
    int n=s.length();
    while(i<n)
    {
        int curr=0;
        if(s[i]==s[i+1])
        {
            curr++;
            int j=i+2;
            while(s[i]==s[j])
            {
                j++;
                curr++;
            }
            i=j;
            ans=max(ans,curr);
        }
        else
        {
            i++;
        }
    }
    cout<<ans+1<<endl;
}
