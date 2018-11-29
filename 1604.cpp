#include<bits/stdc++.h>
using namespace std;

string f(string s)
{
    for (int i = 0;i<s.length();i++)
        if (isupper(s[i]))
            s[i] = tolower(s[i]);

    return s;
}

int main()
{
    string a,b;
    cin>>a>>b;
    if (a.length()!=b.length())
        cout<<1<<endl;
    else if (a == b)
        cout<<2<<endl;
    else if (f(a) == f(b))
        cout<<3<<endl;
    else
        cout<<4<<endl;

    return 0;
}
