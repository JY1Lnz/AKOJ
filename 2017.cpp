#include <iostream>
#include <cstdio>
using namespace std;

const int INF = 99999;
int map[110][110];


int main()
{
    int n,m,l,r,len;
    scanf("%d%d",&n,&m);
    for (int i = 1;i<=n;i++)
        for (int j = 1;j<=n;j++)
            if (i == j)
                map[i][j] = 0;
            else
                map[i][j] = INF;

    for (int i = 0;i<m;i++)
    {
        scanf("%d%d%d",&l,&r,&len);
        if (map[l][r] > len)
        {
            map[l][r] = len;
            map[r][l] = len;
        }
    }

    for (int l = 1;l<=n;l++)
        for (int r = 1;r<=n;r++)
            for (int k = 1;k<=n;k++)
                if (map[l][r] > map[l][k] + map[k][r])
                    map[l][r] = map[l][k] + map[k][r];
    for (int i = 1;i<=n;i++)
    {
        for (int j = 1;j<=n;j++)
            printf("%d ",map[i][j]);
        printf("\n");
    }



    return 0;
}
