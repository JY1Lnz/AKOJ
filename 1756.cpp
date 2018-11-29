#include<bits/stdc++.h>
using namespace std;

bool pan(char c)
{
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}

int main()
{
    string s;
    cin>>s;
    int flag = 0;
    for (int i = 0;i<s.length();i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        if (pan(s[i]))
        {
            cout<<i+1<<endl;
            flag = 1;
            break;
        }
    }
    if (!flag)
        cout<<0<<endl;

    return 0;
}
