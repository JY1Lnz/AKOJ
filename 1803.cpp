#include<bits/stdc++.h>
using namespace std;
int data[11][11];

int main()
{
    ifstream cin ("test.in");
    memset(data,0,sizeof(data));
    int n;
    cin>>n;
    int x,y,v;
    while(cin>>x>>y>>v)
        if (x == 0&&y == 0&&v == 0)
            break;
        else
            data[x][y] = v;
    int l = 1,r = 1;
    int next_l1 = 1,next_r1 = 1;
    int next_l2 = 1,next_r2 = 1;
    int sum = 0;
    for (int i = 1;i<=n;i++)
    {
        for (int j = 1;j<=n;j++)
            printf("%3d ",data[i][j]);
        cout<<endl;
    }
    int line = 0;
    while(l != n||r != n)
    {
        r = line;
        while(data[i])
    }

    cout<<sum<<endl;

    return 0;
}
