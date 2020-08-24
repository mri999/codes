#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define m 1000000007

int main()
{
    string s;
    cin>>s;
    int ans=1;
    vector<string> v;
    v.push_back(s);
    do
    {
        ans++;
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<ans<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
