#include<bits/stdc++.h>
#define ll long long
using namespace std;

char lis[1001][1001];
bool vis[1001][1001];
int n,m,i,j;

bool valid(int x,int y)
{
    if(x<1 || x>n || y<1 || y>m)
        return false;
    if(vis[x][y]==true || lis[x][y]=='#')
        return false;
    return true;
}

void dfs(int x,int y)
{
    vis[x][y]=true;
    if(valid(x-1,y))
    {
        dfs(x-1,y);
    }
    if(valid(x,y+1))
    {
        dfs(x,y+1);
    }
    if(valid(x+1,y))
    {
        dfs(x+1,y);
    }
    if(valid(x,y-1))
    {
        dfs(x,y-1);
    }
    return ;
}

int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>lis[i][j];
        }
    }
    int ans=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(lis[i][j]=='.' && vis[i][j]==false)
            {
                dfs(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}
