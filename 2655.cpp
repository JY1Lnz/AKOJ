#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    stack<int> data;
    while(cin>>s)
    {
        int a;
        istringstream iss(s);
        if (iss>>a)
            data.push(a);
        else
        {
            int l = data.top();
            data.pop();
            int r = data.top();
            data.pop();
            if (s[0] == '+')
                data.push(l+r);
            else if (s[0] == '-')
                data.push(l-r);
            else if (s[0] == '*')
                data.push(l*r);
        }

    }
    cout<<data.top()<<endl;

    return 0;
}
