#include<bits/stdc++.h>
#define ll long long
using namespace std;

int lis[1001][1001];
int dist[1001][1001];
bool vis[1001][1001];
int n,i,j;

int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};

bool isValid(int x , int y)
{
	if(x > n || x < 1 || y > n || y < 1) return false;

	if(vis[x][y] || lis[x][y] == 0) return false;

	return true;
}

void bfs(int srcX , int srcY)
{
	queue< pair<int,int> > q;
	q.push( {srcX , srcY} );
	dist[srcX][srcY] = 0;
	vis[srcX][srcY] = 1;

	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		int d = dist[x][y];
		q.pop();

		for(int i=0;i<4;i++)
		{
			int newX = x + dx[i];
			int newY = y + dy[i];

			if(isValid(newX , newY))
			{
				dist[newX][newY] = d + 1;
				vis[newX][newY] = 1;
				q.push( {newX , newY} );
			}
		}
	}

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sx,sy,ex,ey;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>lis[i][j];
                if(lis[i][j]==1)
                {
                    sx=i;
                    sy=j;
                }
                if(lis[i][j]==2)
                {
                    ex=i;
                    ey=j;
                }
            }
        }
        bfs(sx,sy);
        if(dist[ex][ey]>0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
