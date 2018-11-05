#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int data[n+1][n] = {0};
        for (int i = 1;i<=n;i++)
            data[i][0] = 1;
        for (int i = 1;i<=n;i++)
            data[i][i-1] = 1;

        for (int i = 1;i<=n;i++)
            for (int j = 1;j<i-1;j++)
                data[i][j] = data[i-1][j]+data[i-1][j-1];

        int kong = 0;
        for (int i = n;i>=1;i--)
        {
            for (int x = 0;x<kong;x++)
                cout<<' ';
            for (int j = 0;j<i;j++)
                cout<<data[i][j]<<' ';
            cout<<endl;
            kong++;
        }
        cout<<endl;
    }

    return 0;
}
