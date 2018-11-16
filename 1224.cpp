#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while(cin>>n)
    {
    int data[n][n];
    int n_data[n][n];
    int op;
    cin>>op;
    for (int i = 0;i<n;i++)
        for (int j = 0;j<n;j++)
            cin>>data[i][j];
    if (op == 1)
        for (int i = 0,r = n-1;i<n;i++,r--)
            for (int j = 0, l = 0;j<n;j++,l++)
                n_data[i][j] = data[l][r];
    else if (op == 2)
        for (int i = 0, l = n-1;i<n;i++,l--)
            for (int j = 0, r = n-1;j<n;j++,r--)
                n_data[i][j] = data[l][r];
    else
        for (int i = 0, r = 0;i<n;i++,r++)
            for (int j = 0, l = n-1;j<n;j++,l--)
                n_data[i][j] = data[l][r];
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
            cout<<n_data[i][j]<<' ';
        cout<<endl;
    }

    }
    return 0;
}
