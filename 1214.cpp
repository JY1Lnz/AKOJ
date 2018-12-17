#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int w[n+1] = {0};
    int v[n+1] = {0};
    int dp[m+1] = {0};
    for (int i = 1;i<=n;i++)
        cin>>w[i];
    for (int i = 1;i<=n;i++)
        cin>>v[i];

    int sum = 0;
    for (int i = 0;i<=n;i++)
    {
        for (int j = m;j>=w[i];j--)
        {
            dp[j] = max(dp[j],dp[j-w[i]]+v[i]);
            sum = max(sum,dp[j]);
        }
    }
    cout<<sum<<endl;

    return 0;
}
/*
3 30
20 15 15
40 25 25
*/
