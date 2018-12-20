#include<bits/stdc++.h>
using namespace std;

double data[6][6];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int data[n+5] = {0};
        int vis[n+5] = {0};
        for (int i = 1;i<=n;i++)
            cin>>data[i];
        for (int i = 1;i<=n;i++)
            cin>>vis[i];
        cin>>k;
        int dp[k+1] = {0};
        int flag = 0;
        for (int i = 0;i<=n;i++)
        {
            for (int j = 1;j<=vis[i];j++)
            {
                for (int x = k;x >= data[k];x--)
                {
                    if (x-data[i] < 0)
                        continue;
                    dp[x] = max(dp[x],dp[x-data[i]]+data[i]);
                    if (dp[x] == k)
                        flag = 1;
                }
            }
        }
        if (flag == 1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}
