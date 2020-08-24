#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1 || n==2)
    {
        cout<<0<<endl;
    }
    else
    {
        n=float(n);
        float q1=(n*n*n*n)/2;
        float q2=(5*n*n*n)/3;
        float q3=(3*n*n)/2;
        float q4=n/3;
        float ans=q1-q2+q3-q4;
        cout<<ans<<endl;
    }
    return 0;
}
