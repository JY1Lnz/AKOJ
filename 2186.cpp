#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for (int i = 1;i<=n;i++)
        a[i] = i;
    int w,t = n-1,ad = 1;
    while(t--)
    {
        w = 3;
        while(1)
        {
            if (ad > n)
                ad = 1;
            while(a[ad] == 0)
            {
                ad++;
                if (ad > n)
                    ad = 1;
            }
            w--;
            if (w == 0)
            {
                a[ad] = 0;
                ad++;
                break;
            }
            ad++;
        }
    }
    for (int i = 1;i<=n;i++)
        if (a[i])
        {
            printf("%d\n",i);
            break;
        }

    return 0;
}
