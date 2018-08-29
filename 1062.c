#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        int max_later = 1;
        int max_first;
        for (int i = 1;i < n;i++)
        {
            max_first = 2*(max_later + 1);
            max_later = max_first;
        }
        printf("%d\n",max_later);
    }

    return 0;
}
