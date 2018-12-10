#include<bits/stdc++.h>
using namespace std;

int data[110][110];
int sum = 0;
int n,m;
void dfs(int x,int y)
{
    int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    data[x][y] = 0;
    for (int i = 0;i<4;i++)
    {
        int tx = x+next[i][0];
        int ty = y+next[i][1];
        if (tx < 0||tx>=n||ty<0||ty>=m)
            continue;
        if (data[tx][ty] == 1)
        {
            data[tx][ty] = 0;
            dfs(tx,ty);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sum = 0;
        memset(data,0,sizeof(data));
        cin>>n>>m;
        for (int i = 0;i<n;i++)
            for (int j = 0;j<m;j++)
                cin>>data[i][j];

        for (int i = 0;i<n;i++)
            for (int j = 0;j<m;j++)
            {
                if (data[i][j] == 1)
                {
                    sum++;
                    dfs(i,j);
                }
            }
        cout<<sum<<endl;
    }

    return 0;
}
