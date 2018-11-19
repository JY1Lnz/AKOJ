#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    while(n--&&cin>>m)
    {
        int a;
        list<int> data;
        while(m--&&cin>>a)
            data.push_back(a);
        map<int,int> map_data;
        for (auto x:data)
            map_data[x] = 0;
        for (auto x:data)
            map_data[x]++;
        data.unique();
        for (auto x:data)
            if (map_data[x]%2 != 0)
                cout<<x<<endl;

    }

    return 0;
}
