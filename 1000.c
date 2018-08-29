#include<stdio.h>

int main()
{
    int k,w;
    int big = 0;//最大2k进制数
    int neibu = 1;//整位数
    int tou = 1;
    int beishu = 1;
    int jinzhi = 1;

    scanf("%d%d",&k,&w);

    for (int i = 0;i<k;i++)//几进制
        jinzhi *= 2;

    for (int i = k-1;i>0;i--)
    {
        int f = 1;
        for (int j = i;j>0;j--)
            f *= 2;
        neibu += f;
    }

    for (int i = w%k-1;i>0;i--)
    {
        int f = 1;
        for (int j = i;j>0;j--)
            f *= 2;
        tou += f;
    }

    for (int i = 0;i<w/k;i++)
    {
        big += neibu*beishu;
        beishu *= 10;
    }
    if (w%k != 0)
        big += tou*beishu;

    int weishu = w/k;
    if (w%k != 0)
        weishu++;

    int jinzhi_shu[jinzhi];
    for (int i = 0;i<jinzhi;i++)
        jinzhi_shu[i] = i;





    return 0;
}
