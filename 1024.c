#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long fac=1, s=0;//fac�����洢�׳ˣ�s�����洢�׳˺͡�
    int i;
    for(i = 1; i <= n; i ++)//ѭ��20��
    {
        fac*=i;//����׳�
        s+=fac;//�ۼ�
    }
    printf("%lld\n", s);//������

    return 0;
}
