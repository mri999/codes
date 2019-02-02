#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> s2;
    int i,j;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='.')
            s2.push_back('0');
        else if(s[i]=='-' && s[i+1]=='-')
        {
            s2.push_back('2');
            i++;
        }
        else
        {
            s2.push_back('1');
            i++;
        }

    }
    for(i=0;i<s2.size();i++)
    {
        cout<<s2[i];
    }
}
