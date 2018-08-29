#include<stdio.h>

int main()
{
    int m;
    scanf("%d",&m);
    int data[m][2];
    for (int i = 0;i < m;i++)
        for (int j = 0;j < 2;j++)
            scanf("%d",&data[i][j]);
    for (int i = 0;i < m;i++)
    {
        int temp_a = 0,temp_b = 0;
        for (int j = 1;j <= data[i][0]/2;j++)
            if (data[i][0] % j == 0)
                temp_a += j;
        for (int j = 1;j <= data[i][1]/2;j++)
            if (data[i][1] % j == 0)
                temp_b += j;
        if ((temp_a == data[i][1])&&(temp_b == data[i][0]))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
