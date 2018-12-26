#include <bits/stdc++.h>
using namespace std;
const int INF = 99999;

int main()
{
    int n,m,l,r,len;
    while(~scanf("%d%d",&n,&m))
    {
        if (n == 0&&m == 0)
            break;
        int e[n+1][n+1] = {0};
        for (int i = 1;i<=n;i++)
            for (int j = 1;j<=n;j++)
                if (i == j)
                    e[i][j] = 0;
                else
                    e[i][j] = INF;
        int dis[n+1] = {0};
        int vis[n+1] = {0};
        vis[1] = 1;
        for (int i = 1;i<=m;i++)
        {
            scanf("%d%d%d",&l,&r,&len);
            e[l][r] = len;
            e[r][l] = len;
        }

        for (int i = 1;i<=n;i++)
            dis[i] = e[1][i];
        for (int i = 1;i<=n;i++)
        {
            int w;
            int small = INF;
            for (int j = 1;j<=n;j++)
                if (vis[j] == 0&&dis[j]<small)
                {
                    small = dis[j];
                    w = j;
                }
            vis[w] = 1;
            for (int v = 1;v<=n;v++)
                if (e[w][v] < INF)
                    if (dis[v] > dis[w]+e[w][v])
                        dis[v] = dis[w]+e[w][v];
        }
        cout<<dis[n]<<endl;


    }

    return 0;
}
