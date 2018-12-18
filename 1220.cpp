#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    set<int> data;
    while(n--&&cin>>a)
        data.insert(a);
    for (auto x:data)
        cout<<x<<endl;

    return 0;
}
