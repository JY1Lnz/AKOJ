#include<bits/stdc++.h>
using namespace std;

int jiechen_2(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    return 2*jiechen_2(n-1);
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int a_2 = 0,b_2 = 0;
        while(1)
        {
            if (a%jiechen_2(a_2++) != 0)
                break;
        }
        while(1)
        {
            if (b%jiechen_2(b_2++) != 0)
                break;
        }
        if (a_2>b_2)
            cout<<'>'<<endl;
        else if (a_2<b_2)
            cout<<'<'<<endl;
        else
            cout<<'='<<endl;
    }

    return 0;
}
