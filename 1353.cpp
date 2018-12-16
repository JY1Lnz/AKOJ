#include<bits/stdc++.h>
using namespace std;

const int maxn  = 20001+10;
int dp[maxn];
int data[20];
int vis[20];

int main()
{
    int n,m;
    while(cin>>n)
    {
        for (int i = 1; i<=n; i++)
            cin>>data[i]>>vis[i];
        cin>>m;
        dp[0] = 0;
        for (int i = 1; i<=m; i++)
            dp[i] = 99999;
        for (int i = 1; i<=n; i++)
            //for (int j = 1; j<=vis[i]; j++)
                for (int k = m; k>=data[i]; k--)
                    dp[k] = min(dp[k],dp[k-data[i]]+1);
        if (dp[m] != 99999)
            cout<<dp[m]<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
