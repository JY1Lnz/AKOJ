#include<bits/stdc++.h>
using namespace std;

long long bei(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 10;
    return bei(n-1)*10;
}

int main()
{
    int a = 1000000000;
    cout<<a<<endl;
    return 0;
}
