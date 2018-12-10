#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s,a;
    cin>>s;
    getchar();
    while(getline(cin,a))
    {
        for (int i = 0;i<=a.length()-s.length();i++)
        {
            string t(a,i,i+s.length());
            if (t == s)
                a.erase(i,i+s.length());
        }
        cout<<a<<endl;
    }

    return 0;
}
