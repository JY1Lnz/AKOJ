#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
        a==b?cout<<a<<' '<<b<<endl:cout<<max(a,b)<<endl;


    return 0;
}
