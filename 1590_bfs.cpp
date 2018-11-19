#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

typedef struct note{
    int x;
    int y;
    int s;
}Note;



void bfs(int p,int q,int book[101][101],int data[101][101],int n,int m,int & head,int & tail,Note que[],int & flag)
{
    int tx,ty;
    int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

    while(head < tail)
    {
        for (int i = 0;i<4;i++)
        {
            tx = que[head].x + next[i][0];
            ty = que[head].y + next[i][1];

            if (tx<1||tx>n||ty<1||ty>m)
                continue;
            if (book[tx][ty] == 0&&data[tx][ty] == 0)
            {
                book[tx][ty] = 1;
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].s = que[head].s+1;
                tail++;
            }

            if (tx == p&&ty == q)
                return;
        }
        head++;
    }
    flag = 0;
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int book[101][101] = {0};
        int data[101][101] = {0};
        Note que[10010];
        for (int i = 1;i<=n;i++)
            for (int j = 1;j<=m;j++)
                cin>>data[i][j];
        int startx,starty,p,q;
        cin>>startx>>starty>>p>>q;
        int head = 1,tail = 1;
        int flag = 1;
        que[tail].x = startx;
        que[tail].y = starty;
        que[tail].s = 0;
        tail++;
        book[startx][starty] = 1;
        bfs(p,q,book,data,n,m,head,tail,que,flag);
        if (flag)
            cout<<que[tail-1].s<<endl;
        else
            cout<<"No Way!\n";
    }

}
/*
5 4
0 0 1 0
0 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1
1 1 4 3
*/
