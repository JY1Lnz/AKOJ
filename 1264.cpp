#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int a[n+1] = 0;
        int b[n+1] = 0;
        for (int i = 1;i<=n;i++)
            cin>>a[i]>>b[i];
        int sum = 0;
        int w;
        for (int i = 0;i<=n;i++)
        {
            sum++;
            w = b[i];
            int j = i+1;
            while(j <= n)
            {
                for (;j<=n;j++)
                {
                    if (a[j] == w)
                    {
                        sum++;
                        w = b[j];
                    }
                }
            }
        }
    }

    return 0;
}
