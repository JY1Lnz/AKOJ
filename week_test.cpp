#include<bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    scanf("%d",&times);
    int h,s,m;
    int time;
    while(times--)
    {
        h = 0;
        s = 0;
        m = 0;
        scanf("%d",&time);
        if (time < 60)
            printf("%02d:%02d:%02d\n",h,m,time);
        else if (time < 3600)
        {
            m = time /60;
            s = time%60;
            printf("%02d:%02d:%02d\n",h,m,s);
        }
        else
        {
            h = time / 3600;
            time = time % 3600;
            m = time /60;
            s = time%60;

            printf("%02d:%02d:%02d\n",h,m,s);

        }
    }

    return 0;
}
