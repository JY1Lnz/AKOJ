#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int n_a = 1,n_b = 2;
    int a_bei = 1,b_bei = 1;
    while(n_a != n_b)
    {
        n_a = a*a_bei++;
        if (n_a == n_b)
        {
            printf("%d",n_a);
            break;
        }
        else if (n_a > n_b)
        {
            while(n_a > n_b)
            {
                n_b = b*b_bei++;
                if (n_a == n_b)
                    printf("%d",n_b);
            }
        }
    }

    return 0;
}
