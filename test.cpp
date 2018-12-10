#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s = "abcd";
    istringstream iss(s);
    vector<string> data;
    for (int i = 0;i<s.length();i++)
    {
        string a(s,i,s.length());
        data.push_back(a);
        cout<<a<<endl;
    }

    return 0;
}
