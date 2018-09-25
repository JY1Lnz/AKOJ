#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int data[n];
    int n_data[n];
    int repeat = 0;
    for (int i = 0;i<n;i++)
        scanf("%d",&data[i]);
    for (int i = 0, j = 0;i<n;i++)
    {
        int status = 0;
        for(int k = 0;k < j;k++)
            if (data[i] == n_data[k])
            {
                repeat++;
                status = 1;
            }
        if (status == 0)
        {
            n_data[j] = data[i];
            j++;
        }
    }
    printf("%d\n",n-repeat);
    int nn_data[n-repeat];
    for (int i = 0;i<n-repeat;i++)
        nn_data[i] = n_data[i];
    for (int i = 0;i<n-repeat;i++)
        for (int j = i+1;j<n-repeat;j++)
            if (nn_data[i] >= nn_data[j])
            {
                int tmp = nn_data[j];
                nn_data[j] = nn_data[i];
                nn_data[i] = tmp;
            }
    for (int i = 0;i<n-repeat;i++)
        printf("%d ",nn_data[i]);


    return 0;
}
