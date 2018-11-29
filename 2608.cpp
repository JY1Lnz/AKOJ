#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    int op,w,v;
    cin>>n>>t;
    queue<int> data[n];
    while(t--)
    {
        cin>>op;
        if (op == 0)
        {
            cin>>w>>v;
            data[w].push(v);
        }
        else if (op == 1)
        {
            cin>>w;
            if (!data[w].empty())
                cout<<data[w].front()<<endl;
        }
        else
        {
            cin>>w;
            if (!data[w].empty())
                data[w].pop();
        }
    }

    return 0;
}
