#include<bits/stdc++.h>
using namespace std;
const int maxn = 210;

int head[maxn];

struct lnk
{
    int l;
    int r;
};

int gethead(int n)
{
    if (head[n] == n)
        return n;
    head[n] = gethead(head[n]);
    return head[n];
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if (n == 0&&m == 0)
            break;
        int num = 0;
        memset(head,0,sizeof(head));
        lnk Link[n];
        for (int i = 0;i<m;i++)
            cin>>Link[i].l>>Link[i].r;
        for (int i = 1;i<=n;i++)
            head[i] = i;


        for (int i = 0;i<m;i++)
        {
            int hl = gethead(Link[i].l);
            int hr = gethead(Link[i].r);
            if (hl != hr)
            {
                head[hr] = hl;
                num++;
            }
        }

        cout<<num<<endl;
        vector<int> headnum;
        for (int i = 1;i<=n;i++)
            if (head[i] == i)
                headnum.push_back(i);


        for (int i = 0;i<headnum.size();i++)
        {
            int headn = headnum[i];
            for (int j = 1;j<=n;j++)
            {
                if (headn == gethead(j))
                    cout<<j<<' ';
            }
            cout<<endl;
        }
    }

    return 0;
}
