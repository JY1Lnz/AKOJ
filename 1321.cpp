#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[1001][1001] = {0};
    int n,m;
    cin>>n;
    m = n;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        data[x][y] = 1;
    }
    int sum_x = 0,sum_y = 0,sum_xie = 0;
    for (int i = 1;i<=1000;i++)
    {
        if (data[i][1] == 1)
            sum_x++;
        if (data[1][i] == 1)
            sum_y++;
        if (data[1][1] == 1)
            sum_xie++;
    }
    cout<<max(max(sum_x,sum_y),sum_xie)<<endl;

    return 0;
}
