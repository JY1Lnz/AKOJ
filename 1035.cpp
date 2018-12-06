#include<bits/stdc++.h>
using namespace std;

int getw(int n)
{
    if (n<10)
        return 1;
    return 1+getw(n/10);
}

int bei(int n)
{
    if (n == 1)
        return 10;
    return 10*bei(n-1);
}

int main()
{
    for (int i = 0;i<200000;i++)
    {
        int w = getw(i);
        w = bei(w);
        if ( ( (i)*(i) )%w == i)
            cout<<i<<' ';
    }

    return 0;
}
