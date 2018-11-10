#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    char a;
    string s_a;
    string s_b;
    cin>>n;
    while(n--&&cin>>a)
        s_a += a;
    cin>>m;
    while(m--&&cin>>a)
        s_b += a;
    if (s_b>s_a)
        cout<<1<<endl;
    if (s_a>s_b)
        cout<<0<<endl;


    return 0;
}
