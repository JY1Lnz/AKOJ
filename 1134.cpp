#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,m,d;
    while(cin>>y>>m>>d)
    {
    for (int i = 1;i<=10000;i++)
    {
        //cout<<y<<'-'<<m<<'-'<<d<<endl;
        int flag = 0;
        if (y%4 == 0&&y%100 != 0||y%400 == 0)
            flag = 1;
        int max_d;
        switch(m)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    max_d=31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    max_d=30;
                    break;
                case 2:
                    if (flag == 0)
                        max_d=28;
                    if (flag == 1)
                        max_d=29;
                    break;

            }

        d++;
        if (d > max_d)
        {
            m++;
            d = 1;
        }
        if (m > 12)
        {
            y++;
            m = 1;
        }
    }
    cout<<y<<'-'<<m<<'-'<<d<<endl;
    }

    return 0;
}
