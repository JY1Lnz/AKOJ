#include<stdio.h>

int main()
{
    for (int a = 100;a <= 999;a++)
    {
        int x,y,z;
        x = a%10;
        y = a/10%10;
        z = a/100;
        if (a == x*x*x + y*y*y + z*z*z)
            printf("%d\n",a);
    }

    return 0;
}
