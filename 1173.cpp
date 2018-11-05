#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long sum_1 = 1,sum_2 = 1;
    long long c_1,c_2;
    while(sum_1<n)
    {
        sum_1 *= 2;
    }
    sum_2 = sum_1/2;

    c_1 = sum_1 - n;
    c_2 = n - sum_2;
    if (c_1<c_2)
        cout<<sum_1;
    else
        cout<<sum_2;

    return 0;
}
