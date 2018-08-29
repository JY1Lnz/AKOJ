#include<stdio.h>

int main()
{
    long long int a;
    while(scanf("%lld",&a) != EOF)
    {
        int max = 0;
        while(a/10 != 0)
        {
            int b = a%10;
            max += b;
            a = a/10;
        }
        max += a;
        printf("%d\n",max);
    }

    return 0;
}
