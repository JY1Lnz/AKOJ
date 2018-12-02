#include<bits/stdc++.h>
using namespace std;

int data[10010];

int gethead(int n)
{
    if (data[n] == n)
        return n;
    else
    {
        data[n] = gethead(data[n]);
        return data[n];
    }
}

void merger(int a,int b)
{
    int ta = gethead(a);
    int tb = gethead(b);
    if (ta!=tb)
        data[tb] = ta;
    return;
}

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        memset(data,0,sizeof(data));
        for (int i = 0;i<=n;i++)
            data[i] = i;
        int a,b;
        while(m--)
        {
            cin>>a>>b;
            merger(a,b);
        }
        int sum = 0;
        for (int i = 1;i<=n;i++)
        {
            //cout<<data[i]<<' ';
            if (data[i] == i)
                sum++;
        }
        cout<<sum<<endl;
    }

    return 0;
}
