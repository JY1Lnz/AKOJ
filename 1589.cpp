#include<bits/stdc++.h>
using namespace std;

int data[11][11];
int book[11][11];
struct node
{
    int x;
    int y;
}que[110];
int top;
bool flag = false;
int N,M;
void dfs(int x,int y,int last)
{
    //last = 1 left 2 up 3 right 4 down
    if (x == N&&y == M+1)
    {
        flag = true;
        for (int i = 0;i<top;i++)
            printf("(%d,%d) ",que[i].x,que[i].y);
        return;
    }

    if (x<1||x>N||y<1||y>M)
    {
        return;
    }
    if (book[x][y] == 1)
    {
        return;
    }
    book[x][y] = 1;
    que[top].x = x;
    que[top].y = y;
    top++;
    if (data[x][y] == 5||data[x][y] == 6)
    {
        if (last == 1)
            dfs(x,y+1,1);
        if (last == 2)
            dfs(x+1,y,2);
        if (last == 3)
            dfs(x,y-1,3);
        if (last == 4)
            dfs(x-1,y,4);
    }

    if (data[x][y]>=1&&data[x][y]<=4)
    {
        if (last == 1)
        {
            dfs(x-1,y,4);
            dfs(x+1,y,2);
        }
        if (last == 2)
        {
            dfs(x,y+1,1);
            dfs(x,y-1,3);
        }
        if (last == 3)
        {
            dfs(x-1,y,4);
            dfs(x+1,y,2);
        }
        if (last == 4)
        {
            dfs(x,y+1,1);
            dfs(x,y-1,3);
        }
    }
    book[x][y] = 0;
    top--;
    return;
}

int main()
{
    int n,m;
    cin>>n>>m;
    N = n;
    M = m;
    for (int i = 1;i<=n;i++)
        for (int j = 1;j<=m;j++)
            cin>>data[i][j];

    top = 0;
    for (int i = 0;i<11;i++)
        for (int j = 0;j<11;j++)
            book[i][j] = 0;
    dfs(1,1,1);
    if (!flag)
        cout<<"impossible\n";

    return 0;
}
