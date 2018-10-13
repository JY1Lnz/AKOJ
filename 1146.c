#include<stdio.h>

int main()
{
    int number;
    int sum = 0;
    while((scanf("%d",&number) != EOF)&&(number != 0))
    {
        for (int i = 1;i*i*i<=number;i++)
            if(i*i*i == number)
                sum++;
    }
    printf("%d",sum);

    return 0;
}
