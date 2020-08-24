#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int,greater<int> > h;
    int n,m,i;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        h.insert(temp);
    }
    while(m--)
    {
        int cp;
        cin>>cp;
        auto it=h.lower_bound(cp);
        if(it==h.end())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<*it<<endl;
            h.erase(it);
        }
    }
}
