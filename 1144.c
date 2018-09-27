#include<stdio.h>

int cifang(int n)
{
    if (n == 1)
        return 10;
    if (n == 0)
        return 1;
    return 10*cifang(n-1);
}
int main()
{
    long int a,b;
    scanf("%d%d",&a,&b);
    for (long int i = a;i<=b;i++)
    {
        int sushu = 0;
        for (long int j = 2;j<i;j++)
            if (i%j == 0)
            {
                sushu = 1;
                break;
            }//检查是否为素数
        if (sushu == 0)
        {
            int weishu = 0;
            long int test = i;
            long int test_2 = i;
            long int test_3 = i;
            while(test != 0)//检查位数
            {
                weishu++;
                test/=10;
            }

            int status = 0;

            if (weishu%2 == 0)
                for (long int k = 1;k<=weishu/2;k++)
                {
                    if (test_2%10 != (i/cifang(weishu-k))%10)
                    {
                        status = 1;
                        break;
                    }
                    test_2 /= 10;
                }
            else
                for (long int k = 1;k<=weishu/2;k++)
                {
                    if (test_3%10 != (i/cifang(weishu-k))%10)
                    {
                        status = 1;
                        break;
                    }
                }
            if (status == 0)
                printf("%ld\n",i);
        }
    }

    return 0;
}
