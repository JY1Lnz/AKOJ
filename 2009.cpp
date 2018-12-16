#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e9+10;
int dp[maxn];
int W[maxn],V[maxn];

int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 1;i<=n;i++)
        cin>>W[i]>>V[i];


    int sum = 0;
    for (int i = 1;i<=n;i++)
    {
        for (int j = m;j>=W[i];j--)
        {
            dp[j] = max(dp[j],dp[j-W[i]]+V[i]);
            sum = max(sum,dp[j]);
        }
    }
    cout<<sum<<endl;

    return 0;
}
