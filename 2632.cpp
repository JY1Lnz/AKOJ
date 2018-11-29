#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    //freopen("test.in","r",stdin);
    map<string,int> data;
    int n,a,v,op;
    string key;
    cin>>n;
    while(n--)
    {
        cin>>op;
        if (op == 0)
        {
            cin>>key>>v;
            data[key] = v;
        }
        else if (op == 1)
        {
            cin>>key;
            cout<<data[key]<<endl;
        }
        else
        {
            cin>>key;
            data[key] = 0;
        }
    }


    return 0;
}
