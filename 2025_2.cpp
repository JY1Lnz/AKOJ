#include<bits/stdc++.h>
using namespace std;

int a[510][510];
int n,m,l,r;

struct N//结构体实现 小根堆
{
    int n = 0;
    int name;
    bool operator < (const N a)const
    {
        return this->name > a.name;
    }
};

int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        N vis[n+1];
        memset(a,0,sizeof(a));
        int q[n];
        int w = 0;
        for (int i = 1;i<=n;i++)
            vis[i].name = i;
        for (int i = 0;i<m;i++)
        {
            scanf("%d%d",&l,&r);
            a[l][r] = 1;
            vis[r].n++;
        }

        priority_queue<N> Q;
        for (int i = 1;i<=n;i++)
            if (vis[i].n == 0)
                Q.push(vis[i]);
        while(!Q.empty())
        {
            int x = Q.top().name;
            q[w++] = x;
            Q.pop();
            for (int i = 1;i<=n;i++)
                if (a[x][i] == 1)
                {
                    vis[i].n--;
                    if (vis[i].n == 0)
                        Q.push(vis[i]);
                }
        }
        printf("%d",q[0]);
        for (int i = 1;i<n;i++)
            printf(" %d",q[i]);
        printf("\n");
    }

    return 0;
}
