#include<bits/stdc++.h>
using namespace std;
//µÝ¹é½â¾ö
int f(int n)
{
    if (n == 0)
        return 1;
    return f(n-1)+2*n-2;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<f(n)<<endl;
    }

    return 0;
}
