#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        vector<string> data;
        for (int i = 0;i<s.length();i++)
        {
            string a(s,i,s.length());
            data.push_back(a);
        }
        sort(data.begin(),data.end());
        for (int i = 0;i<data.size();i++)
            cout<<data[i]<<endl;

    }

    return 0;
}
