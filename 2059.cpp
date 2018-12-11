#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    while(cin>>a)
    {
        stack<int> data;
        while(a>0)
        {
            data.push(a%8);
            a = a/8;
        }
        while(data.size())
        {
            cout<<data.top();
            data.pop();
        }
        cout<<endl;
    }

    return 0;
}
