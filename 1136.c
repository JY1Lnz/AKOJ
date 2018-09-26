#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int data[n][n];
    for (int i = 0;i<n;i++)
        for (int j = 0;j<n;j++)
            scanf("%d",&data[i][j]);
    int n_data[n][n];
    for (int i = 0;i<n;i++)
        for (int j = 0;j<n;j++)
            n_data[i][j] = data[j][i];
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
            printf("%d ",n_data[i][j]);
        printf("\n");
    }


    return 0;
}
