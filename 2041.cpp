#include<bits/stdc++.h>
using namespace std;

int relative(char c)
{
    switch(c)
    {
        case 'H':
            return 1;
        case 'C':
            return 12;
        case 'N':
            return 14;
        case 'O':
            return 16;
        case 'F':
            return 19;
        case 'P':
            return 31;
        case 'S':
            return 32;
        case 'K':
            return 39;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int sum = 0;
        for (int i = 0;i<s.length();)
        {
            if (i == s.length()-1||isalpha(s[i])&&isalpha(s[i+1]))
            {
                sum += relative(s[i]);
                i++;
            }
            else
            {
                sum += relative(s[i])*(s[i+1] - '0');
                i+=2;
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}
