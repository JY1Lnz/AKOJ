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

    int n,op,start,over;
    cin>>n>>op>>start>>over;
    {
    int flag = 0;
    int data[n+2][n+2] = {0};
    int book[n*n + 10] = {0};
    struct note que[n*n+10];

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

    head = 1;
    tail = 1;
    que[tail].city = start;
    que[tail].times = 0;
    tail++;
    book[start] = 1;

    int cur;
    while(head<tail)
    {
        cur = que[head].city;
        for (int j = 1;j<=n;j++)
        {
            if (data[cur][j] != inf&&book[j] == 0)
            {
                que[tail].city = j;
                que[tail].times = que[head].times+1;
                tail++;
                book[j] = 1;
            }

            if (que[tail-1].city == over)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
        head++;
    }
    if (flag == 1)
        cout<<que[tail-1].times<<endl;
    else
        cout<<"Cannot reach"<<endl;
    }

    return 0;
}
