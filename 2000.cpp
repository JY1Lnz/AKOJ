#include<bits/stdc++.h>
using namespace std;

int data[110][110];
int sum = 0;
int n,m;
void dfs(int x,int y)
{
    if (x<0||x>=n||y<0||y>=m||data[x][y] == 0)
        return;
    data[x][y] = 0;
    dfs(x,y+1);
    dfs(x,y-1);
    dfs(x+1,y);
    dfs(x-1,y);
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
                    //cout<<i<<' '<<j<<endl;
                    sum++;
                    dfs(i,j);
                }
            }
        cout<<sum<<endl;
    }

    return 0;
}
