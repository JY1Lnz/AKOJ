#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    if (abs(a) != abs(b))
        return abs(a)>abs(b);
    return a>b;
}

int main()
{
    int n,a;
    vector<int> data;
    while(cin>>n&&n)
    {
        data.clear();
        while(n--&&cin>>a)
            data.push_back(a);
        sort(data.begin(),data.end(),cmp);
        for (auto x:data)
            cout<<x<<' ';
        cout<<endl;
    }

    return 0;
}

