#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int

#define vll vector<int>
#define pb push_back
#define pll pair<int,int>
#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define INF LONG_LONG_MAX
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define cases int t; cin>>t; while(t--)
#define array(a,n) vll a(n); rep(i,0,n) cin>>a[i];
#define sortall(a) sort(a.begin(),a.end())
#define printall(a) rep(i,0,a.size()) cout<<a[i]<<" "; cout<<endl;

void solve();

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}
int getCount(vll a,int s)
{
    int n=a.size();
	int cnt=0;
	vll vis(a.size(),0);

	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
		    for(int j=i+1;j<a.size();j++)
            {
                if(a[i]+a[j]==s&&!vis[j])
                {
                    cnt++;
                    vis[i]=vis[j]=1;
                    break;
                }
            }
		}
	}
	return cnt;
}
void solve()
{
	cases{
    	int n,s,fre=0;
    	cin>>n;
    	vll a(n);
    	for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    	sortall(a);
    	rep(s,2,2*n+10)
    	{
    	 	fre=max(fre,getCount(a,s));
    	}
    	cout<<fre<<endl;
    }
}
