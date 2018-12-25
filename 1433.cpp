#include<bits/stdc++.h>
using namespace std;

const int maxn = 1000000+10;
int data[maxn];

int main()
{
    ifstream cin ("test.in");
    int t,n,m;
    cin>>t;
    while(t--)
    {
        memset(data,0,sizeof(data));
        cin>>n>>m;
        int l,r;
        for (int i = 0;i<n;i++)
        {
            cin>>l>>r;
            for (int j = l;j<=r;j++)
                data[j] = 1;
            for (int i = 0;i<=10;i++)
                cout<<data[i]<<' ';
            cout<<endl;
        }
        for (int i = 1;i<=10;i++)
            cout<<data[i]<<' ';
        cout<<endl;
        for (int i = 0;i<m;i++)
        {
            cin>>l>>r;
            int sum = 0;
            for (int j = l;j<=r;j++)
            {
                if (data[j] == 0)
                    sum++;
            }
            cout<<sum<<endl;
        }
        cout<<endl;
    }

    return 0;
}
