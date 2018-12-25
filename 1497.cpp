#include<iostream>
#include<memory.h>
using namespace std;
const int maxn = 1000+10;
int map[maxn][maxn];
int vis[maxn];
int n,m;
int len,now;

void dfs(int start,int t)
{
    if (now >= len)
        return;
    if (t == n-2)
    {
        if (map[start][m] != 0)
        {
            len = min(len,now+map[start][m]);
        }
        return;
    }

    for (int i = 0;i<n;i++)
    {
        if (vis[i] == 0)
        {
            now += map[start][i];
            vis[i] = 1;
            dfs(i,t+1);
            vis[i] = 0;
            now -= map[start][i];
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int l,r,len;
        for (int i = 0;i<n;i++)
            for (int j = 0;j<n;j++)
                map[i][j] = 99999;
        for (int i = 0;i<m;i++)
        {
            cin>>l>>r>>len;
            map[l][r] = len;
            map[r][l] = len;
        }
        for (int i = 0;i<m;i++)
     {
         for (int j = 0;j<m;j++)
                cout<<map[i][j]<<' ';
            cout<<endl;
        }
        int sx,se;
        cin>>sx>>se;
        memset(vis,0,sizeof(vis));
        len = 99999999;
        vis[sx] = 1;
        vis[se] = 1;
        dfs(sx,0);
        cout<<len<<endl;
    }

    return 0;
}
