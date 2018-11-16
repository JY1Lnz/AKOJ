#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    while(n--&&cin>>s)
    {
        map<char,int> data;
        for (auto c:s)
            data[c] = 0;
        for (auto c:s)
            data[c]++;

        list<char> data_s;
        for (auto c:s)
            data_s.push_back(c);
        data_s.unique();
        for (c:data_s)
        {
            if (data[c] != 1)
                cout<<data[c];
            cout<<c;
        }
        cout<<endl;
    }

    return 0;
}
