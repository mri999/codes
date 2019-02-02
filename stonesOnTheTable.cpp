#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i,cnt=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==s[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
