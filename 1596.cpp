#include<bits/stdc++.h>
using namespace std;

struct kr
{
    int l,r;
    int len;
};
int book[1010];

int cmp(kr a,kr b)
{
    return a.len<b.len;
}

int findfather(int n)
{
    if (book[n] == n)
        return n;
    else
    {
        book[n] = findfather(book[n]);
        return book[n];
    }
}

int main()
{
    int n,m,k;
    while(cin>>n>>m)
    {
        memset(book,0,sizeof(book));
        for (int i = 1;i<=n;i++)
            book[i] = i;

        kr path[m+10];

        int l,r,len;
        for (int i = 0;i<m;i++)
            cin>>path[i].l>>path[i].r>>path[i].len;
        sort (path,path+m,cmp);
        int cnt = 0,sum = 0;
        for (int j = 0;j<m;j++)
        {
            int tl = findfather(path[j].l);
            int tr = findfather(path[j].r);
            if (tl!=tr)
            {
                book[tr] = tl;
                cnt++;
                sum+=path[j].len;
                if (cnt == n-k)
                    break;
            }
        }
        if (cnt != n-k)
            cout<<"No Answer"<<endl;
        else
            cout<<sum<<endl;
    }


    return 0;
}
/*
4 3 2
1 2 6
2 3 4
1 4 8
*/
