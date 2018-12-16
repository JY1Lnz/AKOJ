#include<bits/stdc++.h>
using namespace std;

int dp[10010];
int data[30];

int main()
{
    int n;
    while(cin>>n)
    {
        memset(dp,0,sizeof(dp));
        int sum = 0,flag = 0;
        for (int i = 1;i<=n;i++)
        {
            cin>>data[i];
            sum += data[i];
        }
        if (sum%2 != 0)
        {
            flag = 0;
        }
        else
        {
            sum = sum/2;
            for (int i = 1;i<=n;i++)
                for (int j = sum;j>=data[i];j--)
                {
                    //if (j > data[i])
                        //continue;
                    dp[j] = max(dp[j],dp[j-data[i]]+data[i]);
                    if (dp[j] == sum)
                        flag = 1;
                }
        }
        if (flag)
            cout<<"Of course,I can!\n";
        else
            cout<<"Sorry,I can't!\n";
    }

    return 0;
}
/*
3 1 2 3
*/
