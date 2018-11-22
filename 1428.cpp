#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    if (b<a)
        return true;
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n;
        list<int> data;
        for (int i = 0;i<n;i++)
        {
            cin>>a;
            data.push_back(a);
        }
        data.sort(cmp);
        //for (auto x:data)
            //cout<<x<<endl;
        data.unique();
        int w;
        cin>>w;
        vector<int> data_n;
        list<int>::iterator it = data.begin();
        for (;it != data.end();it++)
            data_n.push_back(*it);
        cout<<data_n[w-1]<<endl;

    }

    return 0;
}
