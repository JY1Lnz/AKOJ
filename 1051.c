#include<stdio.h>

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m) != EOF)
    {
        int data[n];
        int weizhi = 0;//��Ϊָʾ��
        for (int i = 0;i < n;i++)//��n�˽���һ�����飬�����
            data[i] = i+1;
        for (int i = 0;i < n-1;i++)
        {
            int a = 1;
            for (int j = 1;j <= m;j++)
            {
                if (data[weizhi] != 0)//�ж��Ƿ��߳�
                {
                    if (j == m)//�ж��Ƿ�Ҫ�߳�
                    {
                        data[weizhi] = 0;//��ֵΪ�����߳�
                        weizhi++;
                        if (weizhi == n)//��weizhi������Χ�����¶�λ������ͷ��
                            weizhi = 0;
                    }
                    else
                    {
                        weizhi++;
                        if (weizhi == n)
                            weizhi = 0;
                    }
                }
                else//������߳�����˴��ƶ���Ч������һ���ƶ�
                {
                    weizhi++;
                    if (weizhi == n)
                        weizhi = 0;
                    j--;
                }
            }
        }
        for(int i = 0;i < n;i++)//�����Ϊ�����ֵ����Ŀ�ꡣ
            if (data[i] != 0)
                printf("%d",data[i]);
        printf("\n");
    }

    return 0;
}
