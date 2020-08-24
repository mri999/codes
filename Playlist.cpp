#include <bits/stdc++.h>
#define ll long long int
#define li long int
#define ld long double
using namespace std;
const ll mod = 1e9 + 7;

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int> s;
    int i=0;
    int  j=0;
    int len=0;
    while(i<n)
    {
        if(s.find(a[i])==s.end())
        {
            s.insert(a[i++]);
            len=max(len,(int)s.size());
        }
        else
        {
            s.erase(a[j++]);
        }
    }
    cout<<len<<endl;
}
