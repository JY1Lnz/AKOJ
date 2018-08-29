#include<stdio.h>
#include<string.h>
#define MAX 9999
#define MIN 1000
int main()
{
    for (int i = MIN;i<=MAX;i++)
    {
        int ab,cd;
        cd = i%100;
        ab = i/100;
        if (i == (ab+cd)*(ab+cd))
            printf("%d ",i);
    }
    return 0;
}
