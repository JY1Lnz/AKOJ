#include<iostream>
using namespace std;

const int Day[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

bool isRun(int year)
{
    if (year%400 == 0||year%4 == 0&&year%100 != 0)
        return true;
    return false;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int year,month,day,date = 0;
        scanf("%d-%d-%d",&year,&month,&day);
        if (month == 2&&isRun(year))
            date += (29-day);
        else
            date += (Day[month]-day);
        for (int i = month+1;i<=12;i++)
            date += Day[i];
        if (month+1 <= 2&&isRun(year))
            date++;
        for (int i = year+1;i<year+18;i++)
            if (isRun(i))
                date += 366;
            else
                date += 365;
        for (int i = 1;i<month;i++)
            date += Day[i];
        if (month > 2&&isRun(year+18))
            date++;
        date += day;
        if (isRun(year)&&month == 2&&day == 29&&!isRun(year+18))
            printf("%d\n",-1);
        else
            printf("%d\n",date);
    }

    return 0;
}
