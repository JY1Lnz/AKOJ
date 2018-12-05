#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if (a == 0&&b == 0&&c == 0)
        {
            cout<<"Abnormal\n";
            continue;
        }
        if (c == 0&&b == 0&&a != 0)
        {
            cout<<1<<endl;
            continue;
        }
        if (c == 0&&a == 0&&b != 0)
        {
            cout<<1<<endl;
        }
        if (a == 0&&b&&c)
        {
            cout<<1<<endl;
            continue;
        }
        int x = b*b-4*a*c;
        if (x == 0)
            cout<<1<<endl;
        else if (x < 0)
            cout<<0<<endl;
        else
            cout<<2<<endl;
    }

    return 0;
}
