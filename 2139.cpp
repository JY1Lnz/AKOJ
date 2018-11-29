#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int w = s.find('&',0);
    string a(s,0,w);
    string b(s,w+1,s.length());
    reverse(b.begin(),b.end());
    if (a == b)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
