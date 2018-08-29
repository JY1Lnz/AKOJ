#include<stdio.h>
#include<string.h>
#define MAX 10000

int main()
{
    int n;
    float max = 0;
    scanf("%d",&n);
    for (float i = 1.0;i <= n;i = i+1.0)
        max += 1.0/i;
    printf("%f",max);

    return 0;
}
