#include<bits/stdc++.h>
using namespace std;

int book[10][10];
int maxn;
int sum = 0;
int vis_white[3][1000],vis_black[3][1000];


void dfs_first(int cur)
{
    if (cur == maxn)
    {
        sum++;
        return;
    }
    for (int i = 0;i<maxn;i++)
    {
        if (book[cur][i] == 1&&!vis_white[0][i]&&!vis_white[1][cur+i+1]&&!vis_white[2][maxn+cur-i-1])
        {
            book[cur][i] = 0;
            vis_white[0][i] = vis_white[1][cur+i+1] = vis_white[2][maxn+cur-i-1] = 1;
            dfs_first(cur+1);
            book[cur][i] = 1;
            vis_white[0][i] = vis_white[1][cur+i+1] = vis_white[2][maxn+cur-i-1] = 0;
        }
    }
}

void dfs_second(int cur)
{
    if (cur == maxn)
    {
        dfs_first(0);
        return;
    }
    for (int i = 0;i<maxn;i++)
    {
        if (book[cur][i] == 1&&!vis_black[0][i]&&!vis_black[1][cur+i+1]&&!vis_black[2][maxn+cur-i-1])
        {
            book[cur][i] = 0;
            vis_black[0][i] = vis_black[1][cur+i+1] = vis_black[2][maxn+cur-i-1] = 1;
            dfs_second(cur+1);
            book[cur][i] = 1;
            vis_black[0][i] = vis_black[1][cur+i+1] = vis_black[2][maxn+cur-i-1] = 0;
        }
    }
}

int main()
{
    cin>>maxn;
    for (int i = 0;i<maxn;i++)
        for (int j = 0;j<maxn;j++)
            cin>>book[i][j];
    dfs_second(0);
    cout<<sum<<endl;


    return 0;
}
