#include<stdio.h>

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m) != EOF)
    {
        int a = 0;
        int max;
        int time = 0;
        int x = n%m;
        if (n%m != 0)
            time = n/m + 1;
        else
            time = n/m;
        for (int i = 1;i <= time;i++)
        {
            max = 0;
            for(int j = 1;j <= m;j++)
            {
                a += 2;
                if(a > 2*n)
                    break;
                max += a;
            }
            if (a > 2*n)
                printf("%d ",max/x);
            else
                printf("%d ",max/m);
        }
        printf("\n");
    }

    return 0;
}
