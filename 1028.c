#include<stdio.h>
#include<string.h>
#define MAX 9999
#define MIN 1000
int f(int x)
{
    if (x == 1)
        return 10;
    return f(x-1)+2;
}
int main()
{
    int x;
    if (scanf("%d",&x)){};
    printf("%d",f(x));

    return 0;
}
