#include<bits/stdc++.h>
using namespace std;

const int maxn  = 20001+10;
int dp[maxn];

int main()
{
    int n,money = 0;
    cin>>n;
    int T[n+1],C[n+1];
    for (int i = 1;i<=n;i++)
        cin>>T[i]>>C[i];
    cin>>money;
    for (int i = 1;i<=n;i++)
    {
        for (int k = 1;k<=C[i];k++)
            for (int j = money;j<=T[i];j--)
            {
                dp[j] = max(dp[j],dp[j-T[i]]+T[i]);
                if (money == dp[j])
                {

                }
            }
    }


    return 0;
}
