#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <memory.h>
#include <algorithm>
using namespace std;

bool flower(int b)
{
    int a = b;
    int r = 0;
    while(a>0)
    {
        int x = a%10;
        r += x*x*x*x;
        a/=10;
        if (r > b)
            return false;
    }
    return (r == b);
}

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!= EOF)
    {
        if (a == 0 && b == 0)
            break;
        int sum = 0;
        for (int i = max(a,1000);i<=min(b,9999);i++)
        {
            if (flower(i))
                sum++;
        }
        cout<<sum<<endl;
    }

    return 0;
}
