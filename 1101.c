#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while((n--) > 0)
    {
        int a,b,c;
        scanf("%d%d",&a,&b);
        a %= 100;
        b %= 100;
        c = a+b;
        c %= 100;
        printf("%d\n",c);
    }

    return 0;
}
