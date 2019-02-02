#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x1,x2;
    vector<char> x3;
    cin>>x1>>x2;
    int i;
    for(i=0;i<x1.length();i++)
    {
        if(x1[i]=='0' && x2[i]=='0')
            x3.push_back('0');
        else if(x1[i]=='1' && x2[i]=='1')
            x3.push_back('0');
        else
            x3.push_back('1');
    }
    for(i=0;i<x3.size();i++)
    {
        cout<<x3[i];
    }
    return 0;
}
