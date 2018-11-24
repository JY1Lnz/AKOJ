#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    while(a%b != 0)
    {
        c = b;
        b = a%b;
        a = c;
    }
    cout<<b<<endl;

    return 0;
}
