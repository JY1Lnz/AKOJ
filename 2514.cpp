#include<bits/stdc++.h>
using namespace std;

int main()
{
    int maxd = 0;
    string s;
    while(cin>>s)
    {
        maxd = 0;
        stack<char> data;
        for (int i = 0;i<s.length();i++)
        {
            if (s[i] == '(')
                data.push('(');
            int data_size = data.size();
            maxd = max(maxd,data_size);
            if (s[i] == ')')
                data.pop();
        }
        cout<<maxd<<endl;
    }

    return 0;
}
