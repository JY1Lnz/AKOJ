#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if (a == 0&&b == 0)
            break;
        int t = a;
        int c = a%1000;
        for (int i = 1;i<=b-1;i++)
            c = (c*t)%1000;
        cout<<c%1000<<endl;
    }

    return 0;
}
