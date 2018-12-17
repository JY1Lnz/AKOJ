#include<iostream>
using namespace std;
typedef long long LL;

int quick_min(LL a,LL n,LL m)
{
    LL r = 1;
    while(n>0)
    {
        if (n&1)
            r = r * a % m;
        a = a * a % m;
        n >>= 1;
    }
    return r;
}

int main()
{
    LL a,b;
    while(cin>>a>>b)
    {
        printf("%03d\n",quick_min(a,b,1000));
    }

    return 0;
}
