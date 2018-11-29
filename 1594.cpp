#include<bits/stdc++.h>
using namespace std;
char data[500][500];
int book[500][500];
struct step
{
    int x;
    int y;
};

void wall(int x,int y,int r,int c)
{
    int tx,ty;
    int next[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
    queue<step> que;
    step temporary = {x,y};
    que.push(temporary);
    data[x][y] = '#';
    while(!que.empty())
    {
        for (int i = 0;i<4;i++)
        {
            tx = que.front().x + next[i][0];
            ty = que.front().y + next[i][1];
            if (tx<0||tx>=r||ty<0||ty>=c)
                continue;

        }
    }
}

void outline(int r,int c)
{
    for (int i = 0;i<c;i++)
    {
        if (data[0][i] != '#')

        if (data[r-1][i] != '#')
    }
    for (int i = 0;i<r;i++)
    {
        if (data[i][0] != '#')

        if (data[i][c-1] != '#')

    }
}



int main()
{
    //ifstream cin ("test.in");
    int r,c;
    cin>>r>>c;
    memset(data,'0',sizeof(data));
    for (int i = 0;i<r;i++)
        for (int j = 0;j<c;j++)
            cin>>data[i][j];




    return 0;
}
