#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string x = s;
        reverse(x.begin(),x.end());
        if (s.length()%2 != 0)
        {
            cout<<s.length()<<endl;
            continue;
        }
        while(s == x)
        {
            if (s.length() == 1)
                break;
            string a(s,s.length()/2,s.length());
            s = a;
            x = s;
            reverse(x.begin(),x.end());
        }
        cout<<s.length()<<endl;

    }

   return 0;
}

