#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    while(getline(cin,s))
    {
        if (s == "!")
            break;
        for (int i = 0;i<s.length();i++)
        {
            if (isupper(s[i]))
                cout<<(char)('Z'-(s[i]-'A'));
            else if (islower(s[i]))
                cout<<(char)('z'-(s[i]-'a'));
            else
                cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
