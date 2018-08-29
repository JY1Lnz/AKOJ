#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int data[n];
    int new_data[n];
    int same = 0;
    int weizhi = 0;
    for (int i = 0;i < n;i++)
        scanf("%d",&data[i]);
    for (int i = 0;i < n;i++)
    {
        int state = 0;
        for (int j = 0;j < weizhi;j++)
            if (data[i] == new_data[j])
            {
                same++;
                state = 1;
            }
        if (state == 0)
            new_data[weizhi++] = data[i];
    }
    for (int i = 0;i < n-same;i++)
        for (int j = i+1;j < n-same;j++)
            if (new_data[i] > new_data[j])
            {
                int tmp = new_data[j];
                new_data[j] = new_data[i];
                new_data[i] = tmp;
            }
    printf("%d\n",n-same);
    for (int i = 0;i < n-same;i++)
        printf("%d ",new_data[i]);

    return 0;
}
