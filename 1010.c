#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    int x,y,z;
    x = a%10;
    y = a/10%10;
    z = a/100;
    if (a == x*x*x + y*y*y + z*z*z)
        printf("1");
    else printf("0");

    return 0;
}
