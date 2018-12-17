#include<bits/stdc++.h>
using namespace std;

int sum = 0;
int hanno(int n)
{
    if (n == 1)
        sum++;
    else
    {
        hanno(n-1);
        sum++;
        hanno(n-1);
    }
}

int main()
{
    int n,m,num;
    cin>>n>>m;
    num = n/m;
    if (n%m != 0)
        num++;
    hanno(num);
    cout<<sum<<endl;

    return 0;
}

