#include<bits/stdc++.h>
using namespace std;

int main()
{
    bool flag = true;
    int n,l;
    cin>>l;
    while(cin>>n)
    {
        if (n<l)
            flag = false;
        l = n;
    }
    if (flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
