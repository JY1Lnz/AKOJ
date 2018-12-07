#include<bits/stdc++.h>
using namespace std;

int main()
{
     string s;
     getline(cin,s);
     for (int i = 0;i<s.length();i++)
        if (!isalpha(s[i]))
            s[i] = ' ';
     istringstream iss(s);
     while(iss>>s)
        cout<<s<<endl;

    return 0;
}
