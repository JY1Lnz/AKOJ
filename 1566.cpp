#include<bits/stdc++.h>
using namespace std;

int x = 0;

int getreverse(int n)
{
    x = x*10 + n%10;
    cout<<x<<endl;
    if (n<10)
        return n;
    getreverse(n/10);
}

bool primer(int n)
{
    for (int i = 2;i*i<=n;i++)
        if (n%i == 0)
            return false;
    return true;
}

int main()
{

    int n = 123;
    getreverse(n);
    cout<<x<<endl;

}
