#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    vector<int> data;
    cin>>n;
    while(n--&&cin>>a)
        data.push_back(a);
    int op;
    cin>>op;
    while(op--)
    {
        int a,b;
        cin>>a>>b;
        reverse(data.begin()+a,data.begin()+b);
    }
    for (auto x:data)
        cout<<x<<' ';

    return 0;
}
