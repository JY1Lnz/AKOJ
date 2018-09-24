#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int data[n];
        int times = n-2;
        int m = n-1;
        for (int i = 0;i < n;i++)
            data[i] = i+1;

        int weizhi = 1;

        while(times-- > 0)
        {

        if (data[weizhi] == 0)
            weizhi = 1;
        printf("%d ",data[weizhi]);
        for(int i = weizhi;i < n-1;i++)
            data[i] = data[i+1];
        data[m] = 0;
        weizhi++;
        m--;
        }
        printf("\n");
        for (int i = 0;i < 2;i++)
            printf("%d ",data[i]);
        printf("\n");
    }

    return 0;
}
