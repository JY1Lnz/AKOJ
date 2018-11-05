#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y,m,d;
    while(scanf("%d/%d/%d",&y,&m,&d) != EOF)
    {
        int flag = 0;
        int sum = 0;
        if (y%4 == 0&&y%100 != 0||y%400 == 0)
            flag = 1;
        for (int i = 1;i<m;i++)
        {
            switch(i)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                    sum+=31;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    sum+=30;
                    break;
                case 2:
                    if (flag == 0)
                        sum+=28;
                    if (flag == 1)
                        sum+=29;
                    break;

            }
        }
        cout<<sum+d<<endl;
    }

    return 0;
}
