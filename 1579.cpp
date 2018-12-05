#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if (n == 0)
        {
            cout<<0<<' '<<0<<endl;
            continue;
        }
        int l,r;
        for (int i = 1;i*i<=n;i++)
        {
            if (n%i == 0)
            {
                l = i;
                r = n/i;
            }
        }
        cout<<l<<' '<<r<<endl;
    }

    return 0;
}
