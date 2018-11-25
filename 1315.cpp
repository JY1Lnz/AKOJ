#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ifstream cin ("test.in");
    int n;
    string s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        int n = 1;
        for (int i = 1;i<=s.length();i++)
        {
            if (s[i] != s[i-1]||i == s.length())
            {
                cout<<n<<s[i-1];
                n = 1;
            }
            else
                n++;
        }
        cout<<endl;
    }

    return 0;
}
