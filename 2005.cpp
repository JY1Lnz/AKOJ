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
    if (a.len!=b.len)
        return a.len<b.len;
    else if (a.l!=b.l)
        return a.l<b.l;
    else if (a.r!=b.r)
        return a.r<b.r;
}

int cmp1(kr a,kr b)
{
    if (a.l!=b.l)
        return a.l<b.l;
    else if (a.r!=b.r)
        return a.r<b.r;
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
    cin>>n>>m;
    {
        vector<kr> lanpath;
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
                lanpath.push_back(path[j]);
                book[tr] = tl;
                cnt++;
                sum+=path[j].len;
                if (cnt == n-1)
                    break;
            }
        }
        if (cnt != n-1)
            cout<<"No Answer"<<endl;
        else
        {
            cout<<sum<<endl;
            sort(lanpath.begin(),lanpath.end(),cmp1);
            vector<kr>::iterator it = lanpath.begin();
            for (;it != lanpath.end();it++)
                cout<<(*it).l<<' '<<(*it).r<<endl;
        }
    }


    return 0;
}
/*
4 3
1 2 6
2 3 4
1 4 8
*/
