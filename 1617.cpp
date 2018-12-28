#include <bits/stdc++.h>
using namespace std;
const int maxn = 100+10;
int data[maxn][maxn];
int nexts[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
map<char,int> head;

int main()
{
    head['U'] = 0;
    head['R'] = 1;
    head['D'] = 2;
    head['L'] = 3;
    int n,m,x,y,k,w;
    char s;
    scanf("%d%d",&n,&m);
    for (int i = 0;i<n;i++)
        for (int j = 0;j<m;j++)
            scanf("%d",&data[i][j]);
    scanf("%d  %d  %c  %d",&x,&y,&s,&k);
    w = head[s];
    for (int i = 0;i<k;i++)
    {
        if (data[x][y] == 0)
            w--;
        else
            w++;
        if (w == -1)
            w = 3;
        if (w == 4)
            w = 0;
        if (data[x][y] == 1)
            data[x][y] = 0;
        else
            data[x][y] = 1;
        x = x+nexts[w][0];
        y = y+nexts[w][1];
        /*
        for (int i = 1;i<=n;i++)
        {
            for (int j = 1;j<=m;j++)
                printf("%d ",data[i][j]);
            printf("\n");
        }
        printf("\n");
        */
    }
    printf("%d %d\n",x,y);

    return 0;
}
