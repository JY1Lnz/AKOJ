#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char data[n][50];
    for (int i = 0;i < n;i++)
        scanf("%s",data[i]);
    for (int i = 0;i < n;i++)
    {
        int big = 0;
        int small = 0;
        int number = 0;
        int other = 0;
        int length = 0;
        int leixing = 0;
        int j = 0;
        int all = 0;
        for (j = 0;;j++)
        {
            if(data[i][j] == '\0')
                break;
            if ((data[i][j] > 'a')&&(data[i][j] < 'z'))
                small = 1;
            if ((data[i][j] > 'A')&&(data[i][j] < 'Z'))
                big = 1;
            if ((data[i][j] > '0')&&(data[i][j] < '9'))
                number = 1;
            switch(data[i][j])
            {
                case '!':
                case '~':
                case '@':
                case '#':
                case '$':
                case '%':
                case '^':
                    other = 1;
                    break;
            }
        }
        if (big == 1)
            all++;
        if (small == 1)
            all++;
        if (number == 1)
            all++;
        if (other == 1)
            all++;
        if ((all >= 3)&&(j >= 0)&&(j <= 16))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
