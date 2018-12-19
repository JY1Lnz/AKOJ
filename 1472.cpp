#include<iostream>
#include<memory.h>
#include<fstream>
#include<algorithm>
using namespace std;
typedef long long LL;
const int maxn = 100+10;

struct C
{
    int enter;
    int run;
};

bool cmp(C a,C b)
{
    if (a.enter != b.enter)
        return a.enter < b.enter;
    return a.run < b.run;
}

int main()
{
    int n;
    while(cin>>n)
    {
        C que[n+5] = {0};
        double time[n+5];
        for (int i = 1;i<=n;i++)
            cin>>que[i].enter>>que[i].run;

        sort(que+1,que+n+1,cmp);
        int w = 1;
        for (int i = 1;i<=n;i++)
        {
            int wait = 0;
            int cha = que[i].enter - w;
            if (cha < 0)
                wait = abs(cha);
            time[i] = wait + que[i].run;
            if (cha < 0)
                w += que[i].run;
            else
                w += cha + que[i].run;
        }
        double all = 0;
        for (int i = 1;i<=n;i++)
            all+=time[i];
        printf("%.4f",all/n);
    }

    return 0;
}
