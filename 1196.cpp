#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    while(cin>>n>>m>>k)
    {
        vector<int> data;
        for (int i = 1;i<=n;i++)
            data.push_back(i);
        int w = 0;
        m--;
        for (int i = 1;i<=n-k;i++)
        {
            w = (w+m)%data.size();
            data.erase(data.begin()+w);
        }
        for (auto x:data)
            cout<<x<<' ';
        cout<<endl;
    }

    return 0;
}
