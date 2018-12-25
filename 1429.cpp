#include<bits/stdc++.h>
using namespace std;

struct bu
{
    int a;
    int b;
    int c;

}data[1010];

bool cmp(bu A,bu B)
{
    return (A.a-A.c) < (B.a-B.c);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,s = 0,cnt = 0;
        cin>>n;
        for (int i = 1;i<=n;i++)
        {
            cin>>data[i].a>>data[i].b>>data[i].c;
            s += data[i].c;
        }
        cin>>m;

        if (s > m)
        {
            cout<<"Oh,my god!\n";
            continue;
        }
        sort(data+1,data+n+1,cmp);
        for (int i = 1;i<=n;i++)
        {
            if (s+(data[i].a-data[i].c) <= m)
            {
                s += data[i].a-data[i].c;
                cnt++;
            }
            else
                break;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
