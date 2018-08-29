#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if (n == 0)
            break;
        int data[n];
        for (int i = 0;i < n;i++)
        {
            scanf("%d",&data[i]);
        }

        for (int i = 0;i < n;i++)
            for (int j = i+1;j < n;j++)
            {
                int a,b;
                if (data[i] < 0)
                    a = -data[i];
                else
                    a = data[i];
                if (data[j] < 0)
                    b = -data[j];
                else
                    b = data[j];
                if (a < b)
                {
                    int tmp =  data[j];
                    data[j] = data[i];
                    data[i] = tmp;
                }
            }

        for (int i = 0;i < n;i++)
            printf("%d ",data[i]);
    }

    return 0;
}
