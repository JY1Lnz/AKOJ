#include<bits/stdc++.h>
using namespace std;

int ff(int n)
{
    if (n<10)
        return n;
    return n%10 + ff(n/10);
}

int f(int n)
{
    if (n < 10)
        return n;
    return f(ff(n));
}

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<f(n)<<endl;
    }


    return 0;
}
