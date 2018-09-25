#include<stdio.h>

int digui(int n)
{
    if (n == 3)
        return 5;
    if (n == 2)
        return 4;
    if (n == 1)
        return 3;

    return digui(n-1)+digui(n-2)+digui(n-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",digui(n));

    return 0;
}
