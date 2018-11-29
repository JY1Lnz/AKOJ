#include<bits/stdc++.h>
using namespace std;

const int inf = 9999;

struct note
{
    int city;
    int times;
};

int main()
{
    ifstream cin ("test.in");
    int n,op,start,over;
    while(cin>>n>>op>>start>>over)
    {
    int flag = 0;
    int data[n+2][n+2] = {0};
    int book[n*n + 10] = {0};
    queue<note> que;

    for (int i = 1;i<=n;i++)
        for (int j = 1;j<=n;j++)
            if (i == j)
                data[i][j] = 0;
            else
                data[i][j] = inf;

    int x,y;
    int head,tail;
    for (int i = 1;i<=op;i++)
    {
            cin>>x>>y;
            data[x][y] = 1;
            data[y][x] = 1;
    }

    note a = {start,0};
    que.push(a);
    book[start] = 1;

    int cur;
    while(!que.empty())
    {
        a = que.front();
        que.pop();
        note nex;
        for (int j = 1;j<=n;j++)
        {
            if (data[a.city][j] != inf&&book[j] == 0)
            {
                nex = {j,a.times+1};
                que.push(nex);
                book[j] = 1;
            }

            if (nex.city == over)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        cout<<que.front().times<<endl;
    else
        cout<<"Cannot reach"<<endl;
    }

    return 0;
}
