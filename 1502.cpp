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
    int a,n;
    while(cin>>a>>n)
    {
        long long sum = 0;
        long long b = a;
        for (int i = 0;i<n;i++)
        {
            b = a*bei(i) + b;
            sum += b;
        }
        cout<<sum<<endl;
    }

    return 0;
}
