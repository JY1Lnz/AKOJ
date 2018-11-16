#include<bits/stdc++.h>
using namespace std;

long long bei(int n)
{
    if (n == 1)
        return 1;
    return 10*bei(n-1);
}

struct node{
    char s[1000];
};

int main()
{
    char s[100];
    while(cin>>s)
    {
        char b;
        b = s[0];
        for (int i = 0;i<strlen(s);i++)
        {
            if (s[i]>b)
                b = s[i];
        }
        for (int i = 0;i<strlen(s);i++)
        {
            cout<<s[i];
            if (s[i] == b)
                cout<<"(max)";
        }
        cout<<endl;
    }

    return 0;
}
