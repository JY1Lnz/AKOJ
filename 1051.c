#include<stdio.h>

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m) != EOF)
    {
        int data[n];
        int weizhi = 0;//作为指示器
        for (int i = 0;i < n;i++)//让n人进入一个数组，并标号
            data[i] = i+1;
        for (int i = 0;i < n-1;i++)
        {
            int a = 1;
            for (int j = 1;j <= m;j++)
            {
                if (data[weizhi] != 0)//判断是否被踢出
                {
                    if (j == m)//判断是否要踢出
                    {
                        data[weizhi] = 0;//数值为零则被踢出
                        weizhi++;
                        if (weizhi == n)//当weizhi超出范围，重新定位到数组头部
                            weizhi = 0;
                    }
                    else
                    {
                        weizhi++;
                        if (weizhi == n)
                            weizhi = 0;
                    }
                }
                else//如果被踢出，则此次移动无效，增加一次移动
                {
                    weizhi++;
                    if (weizhi == n)
                        weizhi = 0;
                    j--;
                }
            }
        }
        for(int i = 0;i < n;i++)//输出不为零的数值，即目标。
            if (data[i] != 0)
                printf("%d",data[i]);
        printf("\n");
    }

    return 0;
}
