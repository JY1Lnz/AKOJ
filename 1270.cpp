#include<bits/stdc++.h>
using namespace std;

struct vote
{
    int num;
    int x;
    int y;
};

bool cmp(struct vote a,struct vote b)
{
    if (a.num < b.num)
        return true;
    else if (a.num == b.num)
        if (a.x < b.x)
            return true;
        else if(a.x == b.x)
            if (a.y < b.y)
                return true;
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        struct vote que[n];
        for (int i = 0;i<n;i++)
        {
            cin>>que[i].num>>que[i].x>>que[i].y;
            int big = max(que[i].x,que[i].y);
            int small = min(que[i].x,que[i].y);
            que[i].x = big;
            que[i].y = small;
        }
        sort (que,que+n,cmp);
        struct vote tmp = que[0];
        cout<<que[0].num<<' '<<que[0].x<<' '<<que[0].y<<endl;
        for (int i = 1;i<n;i++)
        {
            if (tmp.x == que[i].x&&tmp.num == que[i].num&&tmp.y == que[i].y)
                continue;
            cout<<que[i].num<<' '<<que[i].x<<' '<<que[i].y<<endl;
            tmp = que[i];
        }
    }

    return 0;
}
