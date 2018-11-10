#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data;
    int n,a;
    cin>>n;
    while(n--&&cin>>a)
        data.push_back(a);
    int op;
    cin>>op;
    while(op--)
    {
        int b,e,t,max_k;
        cin>>b>>e>>t;
        max_k = e-b;
        for (int k = 0;k<max_k;k++)
        {
            int tmp = data[t+k];
            data[t+k] = data[b+k];
            data[b+k] = tmp;
        }
    }
    for (auto x:data)
        cout<<x<<' ';
    cout<<endl;

    return 0;
}
