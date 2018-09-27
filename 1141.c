#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n) != EOF && n != 0)
    {
        int data[n];
        int repeat = 0;
        for (int i = 0;i<n;i++)
            scanf("%d",&data[i]);
        int n_data[n];
        n_data[0] = data[0];
        int weizhi=1;
        for (int i = 1;i<n;i++)
        {
            int status = 0;
            for (int j = 0;j<i;j++)
                if (data[i] == n_data[j])
                    status = 1;
            if (status == 0)
                n_data[weizhi++] = data[i];
            else
                repeat++;
        }
        for (int i = 0;i<n-repeat;i++)
            for (int j = i+1;j<n-repeat;j++)
                if (n_data[i]>=n_data[j])
                {
                    int tmp = n_data[j];
                    n_data[j] = n_data[i];
                    n_data[i] = tmp;
                }
        printf("%d\n",n-repeat);
        for (int i = 0;i<n-repeat;i++)
            printf("%d ",n_data[i]);
        printf("\n\n");
    }

    return 0;
}
