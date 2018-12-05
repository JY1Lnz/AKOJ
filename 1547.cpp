#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if (a.length()<b.length())
            swap(a,b);

        int sum = 0;
        string c;
        for (int i = 0;i<min(a.length(),b.length());i++)
        {
            sum += sum +(a[i]-'0')+(b[i]-'0');
            c += sum%10+'0';
            sum /= 10;
        }
        if (a.length()>b.length())
        {
        for (int i = b.length();i<a.length();i++)
        {
            sum += sum + (a[i]-'0');
            c += sum%10+'0';
            sum /= 10;
        }
        }
        if (sum > 0)
            c += sum+'0';
        reverse(c.begin(),c.end());
        cout<<c<<endl;
    }

    return 0;
}
