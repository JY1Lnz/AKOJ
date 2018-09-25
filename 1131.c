#include<stdio.h>

long long int jiechen(int n)
{
    if (n == 1)
        return 1;
    return jiechen(n-1)*n;
}
int main()
{
    int n,r;
    while(scanf("%d%d",&n,&r) != EOF)
    {
        printf("%lld\n",jiechen(n)/jiechen(r)/jiechen(n-r));
    }

    return 0;
}
