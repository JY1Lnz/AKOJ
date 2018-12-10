#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    getchar();
    int flag = 0;
    while(t--)
    {
        char c;
        string s,a;
        getline(cin,s);
        istringstream iss(s);
        vector<string> data;
        while(iss>>a)
        {
            data.push_back(a);
        }

        for (int i = 0;i<data.size();i++)
            cout<<(c = toupper(data[i][0]));
        cout<<endl;
    }

    return 0;
}
