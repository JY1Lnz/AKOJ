#include<stdio.h>
#include<string.h>
#define MAX 10000

int main()
{
    int max = 0;
    for (int i = 0;i <= 4;i++)
        for (int j = 0;j <= 3;j++)
            max++;
    printf("%d",max-1);

    return 0;
}
