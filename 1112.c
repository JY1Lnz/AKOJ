#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n-- > 0)
    {
        int data[9];
        for (int i = 0;i < 9;i++)
            scanf("%d",&data[i]);
        int big = 0;
        for (int i = 1;i < 9;i++)
            if (data[i] > data[0])
                big++;
        int tmp = data[8-big];
        data[8-big] = data[0];
        data[0] = tmp;

        for (int i = 0;i<9-big;i++)
            if (data[i] > data[8-big])
                for (int j = 8-big;j<9;j++)
                    if (data[j] < data[8-big])
                    {
                        int tmp = data[j];
                        data[j] = data[i];
                        data[i] = tmp;
                    }
        for (int i = 0;i<9;i++)
            printf("%d ",data[i]);
        printf("\n");
    }

    return 0;
}
