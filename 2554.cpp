#include<bits/stdc++.h>
using namespace std;
int n,q;
int maps[110][110];
int sets[110];

struct Path
{
    int l;
    int r;
    int len;
    bool operator < (const Path & A)const
    {
        return this->len < A.len;
    }
};

int getFather(int n)
{

    if (sets[n] == n)
        return n;
    sets[n] = getFather(sets[n]);
    return sets[n];
}

int main()
{
    int l,r,len;
    while(scanf("%d",&n) != EOF)
    {
        for (int i = 1;i<=n;i++)
            for (int j = 1;j<=n;j++)
            {
                scanf("%d",&len);
                if (i == j)
                    maps[i][j] = -1;
                else
                {
                    maps[i][j] = len;
                    maps[j][i] = len;
                }
            }
        scanf("%d",&q);
        for (int i = 0;i<q;i++)
        {
            scanf("%d%d",&l,&r);
            maps[l][r] = 0;
            maps[r][l] = 0;
        }
        for (int i = 1;i<=n;i++)
            sets[i] = i;
        Path path[n*n+10];
        int w = 0;
        for (int i = 1;i<=n;i++)
            for (int j = i+1;j<=n;j++)
            {
                path[w].l = i;
                path[w].r = j;
                path[w].len = maps[i][j];
                w++;
            }
        sort(path,path+w);
        int length = 0;
        for (int i = 0;i<w;i++)
        {
            int F1 = getFather(path[i].l);
            int F2 = getFather(path[i].r);
            if (F1 == F2)
                continue;
            sets[F2] = F1;
            length += path[i].len;
        }
        cout<<length<<endl;
    }

    return 0;
}
