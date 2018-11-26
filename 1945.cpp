#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s = "1";
    int a;
    for (int i = 2;i<=n;i++)
    {
        int a = 0;
        for (int j = 0;j<s.length();j++)
        {
            a = a + (s[j]-'0')*i;
            s[j] = a%10+'0';
            a /= 10;
        }
        while(a != 0)
        {
            s += a%10+'0';
            a/=10;
        }
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    return 0;
}
