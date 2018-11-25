#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        if (isalpha(s[0])&&islower(s[0]))
            s[0] = toupper(s[0]);
        for (int i = 1;i<s.length();i++)
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
        cout<<s<<endl;
    }

    return 0;
}
