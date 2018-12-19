#include<bits/stdc++.h>
using namespace std;

typedef long long LL;


bool gcd(LL a,LL b)
{
    if (__gcd(a,b) > 1)
        return 0;
    return 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        LL n,sum = 0;
        cin>>n;
        if (n < 3)
            sum = n;
        else if (n&1)
            sum = n*(n-1)*(n-2);
        else if (gcd(n,n-3))
            sum = n*(n-1)*(n-3);
        else
            sum = (n-1)*(n-2)*(n-3);
        cout<<sum<<endl;
    }

    return 0;
}
