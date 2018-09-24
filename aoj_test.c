#include<stdio.h>
int main()
{
    int n = 45;
    int m = n-1;
    int times = n-2;
    int data[n];
    int weizhi = 1;

    for (int i = 0;i < n;i++)
        data[i] = i + 1;

    while(times-- >= 0)
    {

        for (int i = 0;i < n;i++)
            printf("%d ",data[i]);
        printf("\n");
        if (data[weizhi] == 0)
            weizhi = 1;
        for(int i = weizhi;i < n-1;i++)
            data[i] = data[i+1];
        data[m] = 0;
        weizhi++;
        m--;
    }

    return 0;
}
