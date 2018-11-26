#include<bits/stdc++.h>
using namespace std;

int a = 1;

int jie(int n)
{
    if (n == 1)
        return 1;
    return n*jie(n-1);
}
int main()
{
    cout<<jie(11)<<endl;

    return 0;
}
