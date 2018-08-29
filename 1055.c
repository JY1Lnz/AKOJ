#include<stdio.h>

int panduan(int data_1[],int data_2[],int m,int n)
{
    int weizhi_1 = 0;
    int weizhi_2 = 0;
    int big;
    if (data_1[weizhi_1]>data_2[weizhi_2])
        big = data_1[weizhi_1] - data_2[weizhi_2];
    else
        big = data_2[weizhi_2] - data_1[weizhi_1];
    while(1)
    {
        if (data_1[weizhi_1] > data_2[weizhi_2])
        {
            if ((data_1[weizhi_1] - data_2[weizhi_2])<big)
                big = data_1[weizhi_1] - data_2[weizhi_2];
            weizhi_2++;
            if (weizhi_2 == n)
                return big;
        }
        else
        {
            if ((data_2[weizhi_2] - data_1[weizhi_1])<big)
            big = data_2[weizhi_2] - data_1[weizhi_1];
            weizhi_1++;
            if (weizhi_1 == m)
                return big;
        }
    }
}
int main()
{
    int n,m;
    scanf("%d%d",&m,&n);
    int data1[m];
    int data2[n];
    for (int i = 0;i < m;i++)
        scanf("%d",&data1[i]);
    for (int i = 0;i < n;i++)
        scanf("%d",&data2[i]);
    printf("%d",panduan(data1,data2,m,n));

    return 0;
}
