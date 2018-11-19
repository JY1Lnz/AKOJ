#include<iostream>
#include<string>
#include<algorithm>

int next[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};

void help(int x,int y,int p,int q,int step,int data[101][101],int book[101][101],int & small,int n,int m)
{
    if (step >= small)
        return;
    int tx,ty;
    if (x == p&&y == q)
    {
        if (step < small)
            small = step;
            //small = step;
        return;
    }

    for (int i = 0;i<4;i++)
    {
        tx = x+next[i][0];
        ty = y+next[i][1];
        //std::cout<<tx<<' '<<ty<<'\n';

        if (tx<1||ty<1||tx>n||ty>n)
            continue;
        if (book[tx][ty] == 0&&data[tx][ty] != 1)
        {
            book[tx][ty] = 1;
            help(tx,ty,p,q,step+1,data,book,small,n,m);
            book[tx][ty] = 0;
        }

    }
    return;
}

int main()
{
    int n,m,startx,starty,p,q;
    while(std::cin>>n>>m)
    {
        int data[101][101] = {0};
        int book[101][101] = {0};
        for (int i = 1;i<=n;i++)
            for (int j = 1;j<=m;j++)
                std::cin>>data[i][j];
        std::cin>>startx>>starty>>p>>q;
        int small = 999999;
        help(startx,starty,p,q,0,data,book,small,n,m);
        if (small == 999999)
            std::cout<<"No Way!\n";
        else
            std::cout<<small<<'\n';
    }

    return 0;
}
