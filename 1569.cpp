#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int sum = 0;
        for (int i = 1;i<=n;i++)
        {
            int x = 0;
            int y = n-i+1;
            for (int j = 1;j<=m;j++)
            {
                x += m-j+1;
            }
            sum += x*y;
        }
        cout<<sum<<endl;
    }

    return 0;
}
