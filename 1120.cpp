#include<bits/stdc++.h>
using namespace std;

struct date{
    int m;
    int d;
    int y;
};

int main()
{
    struct date data[1000];
    int i = 0;
    int m,d,y;
    while(scanf("%d/%d/%d",&m,&d,&y) != EOF)
    {
        data[i].m = m;
        data[i].d = d;
        data[i].y = y;
        i++;
    }
    for (int j = 0;j<i;j++)
        for (int x = j+1;x<i;x++)
        {
            if (data[j].y > data[x].y)
            {
                struct date tmp = data[x];
                data[x] = data[j];
                data[j] = tmp;
                break;
            }
            else if (data[j].y == data[x].y)
            {
                if (data[j].m > data[x].m)
                {
                    struct date tmp = data[x];
                    data[x] = data[j];
                    data[j] = tmp;
                    break;
                }
                else if (data[j].d > data[x].d)
                {
                    struct date tmp = data[x];
                    data[x] = data[j];
                    data[j] = tmp;
                    break;
                }
            }
        }
        for (int j = 0;j<i;j++)
            printf("%02d/%02d/%d\n",data[j].m,data[j].d,data[j].y);

    return 0;
}
