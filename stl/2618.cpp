#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> data;
    int a,n;
    cin>>n;
    while(n--&&cin>>a)
        data.push_back(a);
    data.unique();
    for (auto x:data)
        cout<<x<<' ';


    return 0;
}
