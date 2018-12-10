#include<bits/stdc++.h>
using namespace std;
//使用辅助数组记录对角线使用情况
int maxn;
int data[1000];
int vis[3][1000] = {0};
int cnt = 0;
void search_vis(int cur)
{
    if (cur == maxn)
    {
        for (int i = 0;i<maxn;i++)
            cout<<data[i];
        cout<<endl;
        return;
    }
    for (int i = 0;i<maxn;i++)
    {
        if (!vis[0][i]&&!vis[1][cur+i]&&!vis[2][cur-i+maxn-1])
        {
            data[cur] = i;
            vis[0][i] = vis[1][cur+i] = vis[2][cur-i+maxn-1] = 1;
            search_vis(cur+1);
            vis[0][i] = vis[1][cur+i] = vis[2][cur-i+maxn-1] = 0;
        }
    }
    return;

}

void search_number(int cur)
{
    if (cur == maxn)
    {
        cnt++;
        return;
    }
    for (int i = 0;i<maxn;i++)
    {
        if (!vis[0][i]&&!vis[1][cur+i]&&!vis[2][cur-i+maxn-1])
        {
            data[cur] = i;
            vis[0][i] = vis[1][cur+i] = vis[2][cur-i+maxn-1] = 1;
            search_number(cur+1);
            vis[0][i] = vis[1][cur+i] = vis[2][cur-i+maxn-1] = 0;
        }
    }
    return;
}

int main()
{
    cin>>maxn;
    search_number(0);
    cout<<cnt<<endl;
    //memset(vis,0,sizeof(vis));
    search_vis(0);

    return 0;
}
