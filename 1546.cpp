#include<bits/stdc++.h>
using namespace std;
map<string,int> dict;
void init()
{
    dict["zero"] = 0;
    dict["one"] = 1;
    dict["two"] = 2;
    dict["three"] = 3;
    dict["four"] = 4;
    dict["five"] = 5;
    dict["six"] = 6;
    dict["seven"] = 7;
    dict["eight"] = 8;
    dict["nine"] = 9;
}

int main()
{
    init();
    string s;
    while(getline(cin,s))
    {
        int l = 0;
        int r = 0;
        string value;
        char op;
        int i = 0;
        for (i = 0;s[i] != '+';i++)
        {
            if (s[i] != ' ')
            {
                value+=s[i];
                continue;
            }
            else if (s[i] == ' ')
            {
                l = l*10+dict[value];
                value.clear();
            }
        }
        for (i+=2;s[i] != '=';i++)
        {
            if (s[i] != ' ')
                value+=s[i];
            else if (s[i] == ' ')
            {
                r = r*10+dict[value];
                value.clear();
            }
        }
            cout<<l+r<<endl;
            if (l == 0&&r == 0)
            break;
    }

    return 0;
}
