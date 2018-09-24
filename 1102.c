#include<stdio.h>

int main()
{
    int l,r;
    while(scanf("%d%d",&l,&r) != EOF)
    {
        int even_sum = 0,odd_sum = 0;
        for (int i = l;i <= r;i++)
        {
            if (i%2 == 0)
                even_sum += i*i;
            if (i%2 != 0)
                odd_sum += i*i*i;
        }
        printf("%d %d\n",even_sum,odd_sum);
    }

    return 0;
}
