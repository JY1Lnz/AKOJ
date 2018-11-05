#include<bits/stdc++.h>
using namespace std;

int top = 0;


struct note_1{
    int x;
    int y;
} data_test[10000];

struct note_2{
    int x;
    int y;
    int sum;
};

void se(int x,int y,int m_x,int m_y,int sum,int top)
{
    int tx,ty;
    int next[4][2] = {
    {0,1},{1,0},{0,-1},{-1,0}
    };

    for (int k = 0;k<4;k++)
    {
        tx = x + next[k][0];
        ty = y + next[k][1];
        if (tx<0||tx>m_x||ty<0||ty>m_y)
            continue;
        if (a[tx][ty] == 0)
        {
            lujing[tx][ty] = 1;
            data_test[top].x = tx;
            data_test[top].y = ty;
            top++;
            se(tx,ty,m_x,m_y,sum,top);
            jujing[tx][ty] = 0;
            top--;
        }
    }

}

int main()
{
    int n,m;
    cin>>n>>m;
    int data[n+1][m+1];
    int lujing[n+1][m+1] = {0};
    for (int i = 0;i<n;i++)
        for (int j = 0;j<m;j++)
            cin>>data[i][j];
    int m_x = n,m_y = m;
    data_test[top].x = 1;
    data_test[top].y = 1;



    return 0;
}
