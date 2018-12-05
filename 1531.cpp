#include<bits/stdc++.h>
using namespace std;

string ce = "AEIOUY";

int main()
{
    string s;
    while(cin>>s)
    {
        int sum = 0;
        int len = 0;
        for (int i = 0;i<s.length();i++)
        {
            len++;
            if (find(ce.begin(),ce.end(),s[i])-ce.begin() != 6)
            {
                sum = max(len,sum);
                len = 0;
            }
            if (i == s.length()-1)
                if (len != 0)
                    sum = max(len+1,sum);
        }
        cout<<sum<<endl;
    }
}
