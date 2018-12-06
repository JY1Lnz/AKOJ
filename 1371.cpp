#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin>>s>>k;
    for (int j = 1,t = k;j<=t;j++)
    {
        for (int i = 0;i<=s.length()-2;i++)
        {
            if (s[i] > s[i+1])
            {
                s.erase(s.begin()+i);
                k--;
                break;
            }
        }
    }
    int flag = 1;
    for (int i = 0;i<s.length()-k;i++)
    {
        if (flag&&s[i] == '0')
            ;
        else
        {
            flag = 0;
            cout<<s[i];
        }
    }
    cout<<endl;

    return 0;
}
