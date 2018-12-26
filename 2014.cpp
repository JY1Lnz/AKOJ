#include<bits/stdc++.h>
using namespace std;

int a[110];

struct Path
{
    int l;
    int r;
    int len;
};

int getHead(int n)
{
    if (a[n] == n)
        return n;
    a[n] = getHead(a[n]);
    return a[n];
}

bool cmp(Path a,Path b)
{
    return a.len < b.len;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 1;i<=n;i++)
        a[i] = i;
    Path path[m];
    int l,r,len;
    for (int i = 0;i<m;i++)
    {
        scanf("%d%d%d",&l,&r,&len);
        path[i].l = l;
        path[i].r = r;
        path[i].len = len;
    }
    sort(path,path+m,cmp);
    int q;
    scanf("%d",&q);
    for (int i = 0;i<q;i++)
    {
        scanf("%d%d",&l,&r);
        int l2 = getHead(l);
        int r2 = getHead(r);
        if (l2 != r2)
            a[r2] = l2;
    }

    int money = 0;
    for (int i = 0;i<m;i++)
    {
        int l = getHead(path[i].l);
        int r = getHead(path[i].r);
        if (l == r)
            continue;
        a[r] = l;
        money += path[i].len;
    }
    printf("%d\n",money);


    return 0;
}
