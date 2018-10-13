#include<bits/stdc++.h>
using namespace std;

int beishu(int a,int b)
{
    int a1,b1;
    a1 = a;
    b1 = b;
    while(1)
    {
        if (a == b)
            return a;
        if (a < b)
            a += a1;
        if (a > b)
            b += b1;
    }
}

int yueshu(int a,int b)
{
    int yu;
    if (a<b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    while(1)
    {
        yu = a%b;
        if (yu == 0)
            return b;
        a = b;
        b = yu;
    }
}

int main()
{
    int times;
    cin>>times;
    while(times-- > 0)
    {
        int a,b;
        cin>>a>>b;
        printf("%d %d\n",yueshu(a,b),beishu(a,b));
    }

    return 0;
}
