#include<stdio.h>

int main()
{
    int a,b;
    while((scanf("%d%d",&a,&b) != EOF)&&(a != 0)&&(b != 0))
    {
        a *= 100;
        for (int i = 0;i < 100;i++)
        {
            if((a+i)%b == 0)
                printf("%.2d ",i);
        }
        printf("\n");
    }

    return 0;
}
