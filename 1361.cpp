#include<bits/stdc++.h>
using namespace std;

int data[110][110];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    for (int i = 0;i<n;i++)
        for (int j = 0;j<=i;j++)
            cin>>data[i][j];

    int sum = 0;
    for (int i = 1;i<n;i++)
        for (int j = 0;j<=i;j++)
        {
            data[i][j] = data[i][j]+max(data[i-1][j],data[i-1][j-1]);
        }
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<=i;j++)
            if (data[i][j] > sum)
                sum = data[i][j];
    }
    cout<<sum<<endl;
    }

    return 0;
}
