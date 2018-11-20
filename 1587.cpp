#include<bits/stdc++.h>
using namespace std;

typedef struct note
{
    int x;
    int y;
}Note;

int bfs_island(int data[101][101],int book[101][101],int & head,int & tail,int n,int m,Note que[])
{
    int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int sum = 1;
    int tx,ty;

    while(head < tail)
    {
        for (int i = 0;i<4;i++)
        {
            tx = que[head].x + next[i][0];
            ty = que[head].y + next[i][1];

            if (tx<1||tx>n||ty<1||ty>m)
                continue;

            if (data[tx][ty] != 0&&book[tx][ty] == 0)
            {
                que[tail].x = tx;
                que[tail].y = ty;
                tail++;
                book[tx][ty] = 1;
                sum++;
            }
        }
        head++;
    }
    return sum;
}


int main()
{

    int n,m,startx,starty;
    while(cin>>n>>m>>startx>>starty)
    {
    int data[101][101];
    int book[101][101] = {0};
    for (int i = 1;i<=n;i++)
        for (int j = 1;j<=m;j++)
            cin>>data[i][j];
    Note que[10010];
    int head = 1,tail = 1;
    que[tail].x = startx;
    que[tail].y = starty;
    tail++;
    book[startx][starty] = 1;

    cout<<bfs_island(data,book,head,tail,n,m,que)<<endl;
    }


    return 0;
}
