#include<bits/stdc++.h>
using namespace std;

unsigned long long jie(int n,int e)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n == e)
        return e;
    return n*jie(n-1,e);
}

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if (a == b)
        {
            cout<<1<<endl;
            continue;
        }
        int c = a-b;
        if (b>c)
            cout<<jie(a,b+1)/jie(c,1)<<endl;
        else
            cout<<jie(a,c+1)/jie(b,1)<<endl;
    }

    return 0;
}
