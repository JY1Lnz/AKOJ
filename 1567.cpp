#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    while(cin>>n)
    {
        n = (n-100)*0.9;
        printf("%.1lf\n",n*2);
    }

    return 0;
}
