#include<stdio.h>
#define MAX 3000

int main()
{
    for (int a = 2;a < MAX;a++)
    {
        int max_1 = 0;
        int max_2 = 0;
        for (int i = 1;i <= a/2;i++)
            if (a%i == 0)
                max_1 += i;
        for (int i = 1;i <= max_1/2;i++)
            if (max_1%i == 0)
                max_2 += i;
        if ((a == max_2)&&(a != max_1))
        {
            printf("(%d,%d)",a,max_1);
            a = max_1;
        }
    }

    return 0;
}
