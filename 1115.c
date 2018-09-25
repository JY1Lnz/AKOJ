#include<stdio.h>

int main()
{
    int data[10];
    for (int i = 0;i < 9;i++)
        data[i] = 0;
    int n;
    int number;
    scanf("%d",&n);

    for (int i = 1;i <= n;i++)
    {
        int j = i;
        while(j != 0)
        {
            number = j%10;
            switch(number)
            {
                case 0:
                    data[0]++;
                    break;
                case 1:
                    data[1]++;
                    break;
                case 2:
                    data[2]++;
                    break;
                case 3:
                    data[3]++;
                    break;
                case 4:
                    data[4]++;
                    break;
                case 5:
                    data[5]++;
                    break;
                case 6:
                    data[6]++;
                    break;
                case 7:
                    data[7]++;
                    break;
                case 8:
                    data[8]++;
                    break;
                case 9:
                    data[9]++;
                    break;
            }
            j /= 10;
        }
    }
    for (int i = 0;i < 10;i++)
        printf("%d\n",data[i]);

    return 0;
}
