#include<bits/stdc++.h>
using namespace std;

long long be(int len)
{
    if (len == 1)
        return 10;
    return 10*be(len-1);
}

int main()
{
    //cout<<be(3)<<endl;
    int n,a;
    cin>>n;
    while(n--&&cin>>a)
    {
        int b = a;
        int len = 0;
        while(a != 0)
        {
            len++;
            a /= 10;
        }
        b = b % be(len-1);
        cout<<b<<endl;
    }

    return 0;
}
