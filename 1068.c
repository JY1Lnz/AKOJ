#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 1;i <= n;i++)
    {
        int line;
        int sum_now = 0;
        int sum_big = 0;
        scanf("%d",&line);
        int data[line][line];
        for (int i = 0;i < line;i++)
            for (int j = 0;j < i+1;j++)
                scanf("%d",&data[i][j]);
        for (int i = 0;i < line;i++)
        {

        }
    }

    return 0;
}
