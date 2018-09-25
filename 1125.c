#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int data[n];
        data[0] = 1;
        for (int i = 1;i<=n;i++)
        {
            int n_data[i];
            if (i > 2)
            {
                n_data[0] = 1;
                n_data[i-1] = 1;
                for (int j = 1;j<i-1;j++)
                    n_data[j] = data[j-1]+data[j];
            }
            if (i == 1)
                n_data[0] = 1;
            if (i == 2)
            {
                n_data[0] = 1;
                n_data[1] = 1;
            }
            for (int k = 0;k<i;k++)
                printf("%d ",n_data[k]);
            for (int k = 0;k<i;k++)
                data[k] = n_data[k];
            printf("\n");
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
