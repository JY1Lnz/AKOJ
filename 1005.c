#include<stdio.h>

int main()
{
    int zu;
    scanf("%d",&zu);
    //printf("%d",zu);
    int lie[zu][2];
    for (int i = 0;i<zu;i++)
        for (int j = 0;j<2;j++)
            scanf("%d",&lie[i][j]);

    for (int q = 0;q<zu;q++)
    {
        printf("X");//开头第一行
        for (int i=0;i<lie[q][0]-2;i++)
            printf(" ");
        printf("X\n");

        for (int i = 0;i<lie[q][1];i++)//重复部分打印
        {
            for (int n = 1;n<=(lie[q][0]-1)/2 - 1;n++)//打印上半部分
            {
                int k = lie[q][0]-(n+1)*2;
                for (int m = 0;m<n;m++)//打印上半部的空格
                    printf(" ");
                printf("X");//打印上半部空格之后
                for (int s = k;s>0;s--)
                    printf(" ");
                printf("X\n");
            }

            for (int i = 0;i<(lie[q][0]-1)/2;i++)//中间位空格
                printf(" ");
            printf("X\n");

            for (int n = (lie[q][0]-1)/2;n>0;n--)//下半部分
            {
                int k = lie[q][0]-(n*2);
                for (int i = n-1;i>0;i--)
                    printf(" ");
                printf("X");
                for (int i = k;i>0;i--)
                    printf(" ");
                printf("X\n");

            }

        }
        printf("\n");
    }

    return 0;
}
//完成
