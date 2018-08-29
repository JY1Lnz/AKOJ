#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int x[n];
    x[0] = 1;
    x[1] = 1;
    for (int i = 2;i < n;i++)
    {
        x[i] = x[i-1] + x[i-2];
    }
    for (int i = 0;i<n;i++)
        printf("%d ",x[i]);

    return 0;
}
