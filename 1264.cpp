#include<bits/stdc++.h>
using namespace std;

struct de
{
    int l;
    int r;
};

bool cmp(de A,de B)
{
    if (A.l != B.l)
        return A.l < B.l;
    return A.r < B.r;
}

int main()
{
    int n;
    while(cin>>n)
    {
        de que[n];
        for (int i = 0;i<n;i++)
            cin>>que[i].l>>que[i].r;
        sort(que,que+n,cmp);
        int sum = 1;
        int w = que[0].r;
        for (int i = 1;i<n;i++)
        {
            if (que[i].l >= w)
            {
                sum++;
                w = que[i].r;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
