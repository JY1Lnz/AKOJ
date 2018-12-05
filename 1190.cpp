#include<bits/stdc++.h>
using namespace std;

int data[10010];
int gethead(int n)
{
    if (data[n] == n)
        return n;
    data[n] = gethead(data[n]);
    return data[n];
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if (n==0&&m==0)
            break;
        //int data[n+1];
        for (int i = 1;i<=n;i++)
            data[i] = i;
        int l,r;
        for (int i = 0;i<m;i++)
        {
            cin>>l>>r;
            int tl = gethead(l);
            int tr = gethead(r);
            if (tl != tr)
                data[tr] = tl;
        }
        int sum = 0;
        for (int i = 1;i<=n;i++)
            if (data[i] == i)
                sum++;
        cout<<sum-1<<endl;
    }

    return 0;
}
