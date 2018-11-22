#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>m>>x;
        int data[n][m];
        for (int i = 0;i<n;i++)
            for (int j = 0;j<m;j++)
                cin>>data[i][j];
        int value[x];
        for (int i = 0;i<x;i++)
            cin>>value[i];
        for (int i = 0;i<x;i++)
        {
            int sum = 0;
            for (int j = 0;j<n;j++)
                for (int k = 0;k<m;k++)
            {
                if (value[i] < data[j][k])
                    sum++;
            }
            cout<<sum<<endl;
        }
    }

    return 0;
}
