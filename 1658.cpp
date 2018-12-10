#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    getline(cin,s);
    set<string> data;
    istringstream iss(s);
    while(iss>>t)
    {
        data.insert(t);
    }
    cout<<data.size()<<endl;

    return 0;
}
