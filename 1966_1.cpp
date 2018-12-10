#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    //cout<<endl;
    while(t--)
    {
        char c;
        string s;
        getline(cin,s);
        cout<<(c = toupper(s[0]));
        for (int i = 1;i<s.length();i++)
        {
            if (s[i-1] == ' '&&isalpha(s[i]))
                cout<<(c = toupper(s[i]));
        }
        cout<<endl;
    }

    return 0;
}
