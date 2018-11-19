#include<bits/stdc++.h>
#include<algorithm>

int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

typedef struct note
{
    int x;
    int y;
}Note;

int get_boom(int x,int y,char data[51][51],int n,int m)
{
    int bx,by;
    int sum = 0;
    for (int i = 0;i<4;i++)
    {
        bx = x + next[i][0];
        by = y + next[i][1];
        while(bx<=n&&bx>=1&&by<=m&&by>=1)
        {
            if (data[bx][by] == '#')
                break;
            if (data[bx][by] == 'G')
                sum++;
            bx += next[i][0];
            by += next[i][1];
        }
    }
    return sum;
}

int bfs(int n,int m,int & max_boom,int book[51][51],char data[51][51],int & head,int & tail,Note que[])
{
    int tx,ty;
    while(head < tail)
    {
        for (int i = 0;i<4;i++)
        {
            tx = que[head].x + next[i][0];
            ty = que[head].y + next[i][1];
            if (tx<1||tx>n||ty<1||ty>m)
                continue;
            if (data[tx][ty] == '.'&&book[tx][ty] != 1)
            {
                book[tx][ty] = 1;
                que[tail].x = tx;
                que[tail].y = ty;
                tail++;
                max_boom = std::max(max_boom,get_boom(tx,ty,data,n,m));
            }
        }
        head++;
    }

}

int main()
{
    using namespace std;
    Note que[2510];
    char data[51][51];
    int book[51][51] = {0};
    int n,m;
    int startx,starty;
    int max_boom;

    cin>>n>>m>>startx>>starty;

    for (int i = 1;i<=n;i++)
        for (int j = 1;j<=m;j++)
            cin>>data[i][j];

    max_boom = get_boom(startx,starty,data,n,m);
    int head = 1,tail = 1;
    que[tail].x = startx+1;
    que[tail].y = starty+1;
    book[startx][starty] = 1;
    tail++;
    bfs(n,m,max_boom,book,data,head,tail,que);
    cout<<max_boom<<endl;


    return 0;
}
