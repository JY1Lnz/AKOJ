#include <bits/stdc++.h>
using namespace std;

int a[21][21];

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1;i<=n;i++)
        for (int j = 1;j<=n;j++)
            scanf("%d",&a[i][j]);
    int good,bad;
    for (int i = 1;i<=n;i++)
    {
        good = 0;
        bad = 0;
        for (int j = 1;j<=n;j++)
        {
            if (j == i)
                continue;
            if (a[j][i] == 1)
                good++;
            else
                bad++;
        }
        if (good>=bad)
            printf("%d ",i);
    }

    return 0;
}
