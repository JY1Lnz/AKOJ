#include<bits/stdc++.h>
using namespace std;

int print_value(set<int> data)
{
    for (auto it = data.begin();it != data.end();it++)
        cout<<*it<<endl;
}

int main()
{
    //ifstream cin ("test.in");
    //freopen("test.in","r",stdin);
    set<int> data;
    int n,m,v;
    cin>>n;
    while(n--&&cin>>v)
        data.insert(v);
    cin>>m;
    while(m--&&cin>>v)
        data.insert(v);
    print_value(data);


    return 0;
}
