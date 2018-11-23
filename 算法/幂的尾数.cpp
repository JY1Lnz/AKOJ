#include<bits/stdc++.h>
using namespace std;
const int h = 100;
/*
//二分思想
//在满足条件情况下
不断与自身相乘不够时从1开始在相乘
样例:
3^9
(3*3*3*3) * (3*3*3*3) * 3
括号内为内循环
*/
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        a = a%1000;
        long long c = 1;
        long long i = 1;
        long long sum = 1;
        while(i <= b)
        {
            while(i <= b)
            {
                //cout<<'i'<<i<<endl;
                if (i == 1)
                {
                    i++;
                    c *= a;
                    continue;
                }
                else
                    c *= c;
                c %= 1000;
                //cout<<i<<endl;
                //cout<<c<<endl;
                if (b-i >= i)
                {
                    i *= 2;
                    continue;
                }
                break;
            }
            sum *= c;
            sum%=1000;
            c = 1;
            b = b-i;
            i = 1;
        }
        if (sum<10)
            cout<<"00"<<sum<<endl;
        else if (sum<100)
            cout<<'0'<<sum<<endl;
        else
            cout<<sum<<endl;
    }

    return 0;
}
