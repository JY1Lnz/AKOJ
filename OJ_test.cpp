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
    long long a = 9;
    for (int i = 0;i<=10;i++)
    {
        cout<<
        a = a + a*bei(i);
        cout<<a<<endl;
    }

    return 0;
}
