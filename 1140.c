#include<stdio.h>

int main()
{
    int year,month,day;
    while(scanf("%d/%d/%d",&year,&month,&day) != EOF)
    {
        int sum_day = 0;
        int month_2_day;
        if ((year%400 == 0)||((year%4 == 0)&&(year%100 != 0)))
            month_2_day = 29;
        else
            month_2_day = 28;
        for (int i = 1;i < month;i++)
        {
            switch(i)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    sum_day+=31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    sum_day+=30;
                    break;
                case 2:
                    sum_day+=month_2_day;
                    break;
            }
        }
        printf("%d\n",sum_day+day);
    }

    return 0;
}
