#include<stdio.h>

int main()
{
    int data[7];
    char name[20];
    while(1)
    {
        int small = 10,max = 0;
        int small_weizhi,max_weizhi;
        float sum = 0;
        int status = 0;
        for (int i = 0;i < 7;i++)
        {
            if (scanf("%d",data[i]) == EOF)
                status = 1;
        }
        if (status == 1)
            break;
        scanf("%s",name);
        for (int i = 0;i < 7;i++)
        {
            if(data[i] < small)
            {
                small = data[i];
                small_weizhi = i;
            }
            if(data[i] > max)
            {
                max = data[i];
                max_weizhi = i;
            }

        }
        data[small_weizhi] = 0;
        data[max_weizhi] = 0;
        for (int i = 0;i<7;i++)
            sum += data[i];
        printf("%s ",name);
        printf("%.2f",sum/5);
    }

    return 0;
}
