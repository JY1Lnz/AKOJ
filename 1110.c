#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    while(n-- > 0)
    {
        int data[4];
        for (int i = 0;i < 4;i++)
            scanf("%d",&data[i]);
        for (int i = 0;i < 4;i++)//sort data
            for (int j = i+1;j < 4;j++)
                if (data[i] > data[j])
                {
                    int tem = data[i];
                    data[i] = data[j];
                    data[j] = tem;
                }

        for (int i = 0;i < 4;i++)
        {
            for (int j = 0;j < 4;j++)
                for (int k = 0;k < 4;k++)
                    for (int l = 0;l < 4;l++)
                        if ((i != j)&&(i != k)&&(i != l)&&(j != k)&&(j != l)&&(k != l))
                            printf("%d%d%d%d ",data[i],data[j],data[k],data[l]);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
