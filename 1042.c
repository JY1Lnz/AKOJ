#include<stdio.h>
#include<string.h>
#define MAX 10000

int main()
{
    int n;
    scanf("%d",&n);
    int max = 1;
    for (int i = 1;i <= n;i++)
        max *= i;
    printf("%d",max);

    return 0;
}
