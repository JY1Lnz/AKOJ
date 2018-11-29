#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    set<int> data;
    int n,a,op,v;
    cin>>n;
    while(n--)
    {
        cin>>op>>v;
        if (op == 0)
        {
            data.insert(v);
            cout<<data.size()<<endl;
        }
        else
        {
            if (v > *data.end()||v<*data.begin())
                cout<<0<<endl;
            else if (data.find(v) != data.end())
                cout<<1<<endl;
            else
                cout<<0<<endl;

        }
    }


    return 0;
}
