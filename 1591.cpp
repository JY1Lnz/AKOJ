#include<bits/stdc++.h>
using namespace std;

int Max;
int n;
void LICS(int data[],int dp[])
{

    for (int i = 0;i<n;i++)
    {
        dp[i] = 1;
        for (int j = 0;j<i;j++)
        {
            if (data[i]<data[j] && dp[i]<1+dp[j])
                dp[i] = 1+dp[j];
        }
        Max = 0;
        for (int i = 0;i<n;i++)
            if (Max<dp[i])
                Max = dp[i];
    }
}

int main()
{
    while(cin>>n)
    {
    int data[n];
    int dp[n] = {0};
    for (int i = 0;i<n;i++)
        cin>>data[i];
    Max = 0;
    LICS(data,dp);
    cout<<Max<<endl;
    }

    return 0;
}
