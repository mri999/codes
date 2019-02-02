#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0,i;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='H' | s[i]=='Q' | s[i]=='9' | s[i]=='+')
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
