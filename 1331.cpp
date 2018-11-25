#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int data[n][m];
        for (int i = 0;i<n;i++)
            for (int j = 0;j<m;j++)
                cin>>data[i][j];
        int flag = 0;
        for (int i = 1;i<n-1;i++)
            for (int j = 1;j<m-1;j++)
                if (data[i][j]>data[i-1][j]&&data[i][j]>data[i][j-1]&&data[i][j]>data[i+1][j]&&data[i][j]>data[i][j+1])
                {
                    cout<<data[i][j]<<' '<<i+1<<' '<<j+1<<endl;
                    flag = 1;
                }
        if (!flag)
            cout<<"None"<<' '<<n<<' '<<m<<endl;
    }

    return 0;
}
