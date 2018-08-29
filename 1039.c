#include<stdio.h>
#include<string.h>
#define MAX 10000

int main()
{
    int length = 1;
    int num[MAX];
    num[0] = 1;

    for (int i = 2;i <= 1977;i++)
    {
        int rem = 0;
        for (int j = 0;j < length;j++)
        {
            rem = rem + num[j]*i;
            num[j] = rem % 10;
            rem /= 10;
        }
        while(rem != 0)
        {
            num[length] = rem%10;
            rem /= 10;
            length++;
        }
    }
    for (int i = length-1;i >= 0;i--)
        printf("%d",num[i]);

    return 0;
}
