#include<bits/stdc++.h>
using namespace std;

int a[510][510];
int vis[510];
int n,m,l,r;

int main()
{
    while(~scanf("%d%d",&n,&m))
    {
        memset(vis,0,sizeof(vis));
        memset(a,0,sizeof(a));
        int q[n];
        int w = 0;
        for (int i = 0;i<m;i++)
        {
            scanf("%d%d",&l,&r);
            a[l][r] = 1;
            vis[r]++;
        }
        priority_queue<int> Q;
        for (int i = 1;i<=n;i++)
            if (vis[i] == 0)
                Q.push(-1*i);//�����Ը�������ʵ����С��
        while(!Q.empty())
        {
            int x = -1*Q.top();//����ȡ���Ż�ԭ
            q[w++] = x;
            Q.pop();
            for (int i = 1;i<=n;i++)
                if (a[x][i] == 1)
                {
                    vis[i]--;
                    if (vis[i] == 0)
                        Q.push(-1*i);
                }
        }
        printf("%d",q[0]);
        for (int i = 1;i<n;i++)
            printf(" %d",q[i]);
        printf("\n");
    }

    return 0;
}
