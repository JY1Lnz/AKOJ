#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int data[21][21] = {0};
    int tot = 0;
    int x = 0,y = -1;
    while(tot < n*n)
    {
        while(y+1<n&&data[x][y+1] == 0)
            data[x][++y] = ++tot;
        while(x+1<n&&data[x+1][y] == 0)
            data[++x][y] = ++tot;
        while(y-1>=0&&data[x][y-1] == 0)
            data[x][--y] = ++tot;
        while(x-1>=0&&data[x-1][y] == 0)
            data[--x][y] = ++tot;
    }
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
            cout<<data[i][j]<<' ';
        cout<<endl;
    }

    return 0;
}
