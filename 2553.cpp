#include<bits/stdc++.h>
using namespace std;

bool comp(string temp,string str)
{
    int a=0,b=0;
    for (int i=0;i<str.length();++i)
        a=a*10 + (str[i]-'0');
    for (int i=0;i<temp.length();++i)
        b=b*10 + (temp[i]-'0');
    return b>a;
}

bool ok(string a,string b)
{
    if (a.length() != b.length())
        return a.length() < b.length();
    return a<b;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s,num;
        string now,maxn;
        cin>>s;
        maxn = "";
        maxn += s[0];
        now = "";
        cout<<maxn;
        for (int i = 1;i<s.length();i++)
        {
            now += s[i];
            if (comp(now,maxn))
            {
                cout<<","<<now;
                maxn = now;
                now = "";
            }
        }
        cout<<now;

        cout<<endl;
    }

    return 0;
}
