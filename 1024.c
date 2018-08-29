#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long fac=1, s=0;//fac用来存储阶乘，s用来存储阶乘和。
    int i;
    for(i = 1; i <= n; i ++)//循环20次
    {
        fac*=i;//计算阶乘
        s+=fac;//累加
    }
    printf("%lld\n", s);//输出结果

    return 0;
}
