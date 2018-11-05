#include<bits/stdc++.h>
using namespace std;

long long bei(int n)
{
    if (n == 1)
        return 1;
    return 10*bei(n-1);
}

int main()
{
    char x ;
    string s;
    while(getline(cin,s))
    {
        char c;
        cin>>c;
        for (int i = 0;i<s.size();i++)
            if (s[i] != c)
                cout<<s[i];
        cout<<endl;
        x = getchar();
        //cout<<s;
    }

    return 0;
}
