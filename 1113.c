#include<stdio.h>

int main()
{
    int n,m;
    while((scanf("%d%d",&n,&m) != EOF)&&(n != 0)&&(m != 0))
    {
        int data[n+1];
        for (int i = 0;i < n;i++)
            scanf("%d",&data[i]);
        for (int i = 0;i < n;i++)
            if(m < data[i])
            {
                for (int j = n;j > i;j--)
                    data[j] = data[j-1];
                data[i] = m;
                break;
            }
        for (int i = 0;i <= n;i++)
            printf("%d ",data[i]);
        printf("\n");
    }

    return 0;
}
