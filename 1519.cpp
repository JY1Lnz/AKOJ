#include<bits/stdc++.h>
using namespace std;
//贪吃蛇动态规划
/*
寻找吃的最多的路径可以看成每一个位置从上两个位置选最多的过来
将数组构造成每个位置对应之前路径的最大值
样例
1 2 3 7
3 4 2 1
1 5 4 8
10 3 0 3
构造后的数组
1  3  6  13
4  8  10 14
5  13 17 25
15 18 18 28
*/
int data[110][110];

struct vote
{
    int x;
    int y;
};

void pu(stack<vote> & path,int x,int y)
{
    vote temporary = {x,y};
    path.push(temporary);
    if (x == 1&&y == 1)
        return;
    else if (x == 1 && y > 1)
        pu(path,x,y-1);
    else if (x > 1 && y == 1)
        pu(path,x-1,y);
    else
        if (data[x-1][y]>data[x][y-1])
            pu(path,x-1,y);
        else
            pu(path,x,y-1);
}

int main()
{
    ifstream cin ("test.in");
    int n,m;
    while(cin>>n>>m)
    {
        stack<vote> path;
        memset(data,0,sizeof(data));
        for (int i = 1;i<=n;i++)
            for (int j = 1;j<=m;j++)
                cin>>data[i][j];
        for (int i = 1;i<=n;i++)
            for (int j = 1;j<=m;j++)
                if (i == 1&&j == 1)
                    data[i][j] = data[i][j];
                else if (i == 1&&j > 1)
                        data[i][j] = data[i][j]+data[i][j-1];
                else if (i > 1&&j == 1)
                        data[i][j] = data[i][j]+data[i-1][j];
                else
                    data[i][j] = data[i][j]+max(data[i-1][j],data[i][j-1]);
        cout<<data[n][m]<<endl;
        pu(path,n,m);
        while(!path.empty())
        {
            printf("(%d,%d)\n",path.top().x,path.top().y);
            path.pop();
        }
    }


    return 0;
}
