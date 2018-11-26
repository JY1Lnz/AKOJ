#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ifstream cin ("test.in");
    /*
    int n,m;
    while(cin>>n>>m)
    {
        int a,k;
        vector<int> due;
        vector<int> real;
        while(n--&&cin>>a)
            due.push_back(a);
        while(m--&&cin>>a)
            real.push_back(a);
        cin>>k;
        sort(due.begin(),due.end());
        sort(real.begin(),real.end());
        while(real.size()&&due[0] == real[0])
        {
            due.erase(due.begin());
            real.erase(real.begin());
        }
        if (!real.size())
            cout<<"YES\n";
        else if (real[0] == k)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    */
    int n,m;
    while(cin>>n>>m)
    {
        int a,k;
        map<int,bool> data;
        while(n--&&cin>>a)
            data[a] = false;
        while(m--&&cin>>a)
            data[a] = true;
        cin>>k;
        for (auto it = data.begin();it != data.end();it++)
        {
            if (!it -> second)
            {
                if (it->first == k)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
                break;
            }
        }

    }

    return 0;
}
