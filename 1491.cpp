#include<iostream>
#include<vector>
#define For(x,end) for (int i = (x);i < (end);i++)
using namespace std;

vector<pair<int,int> > data;

void Solve()
{
    int op,p,q,l;
    cin>>op;
    if (op == 1)
    {
        cin>>p>>q;
        For(0,data.size())
            cout<<data[i].first+p<<' '<<data[i].second+q<<endl;
    }
    else if (op == 2)
    {
        cin>>l;
        For(0,data.size())
            cout<<data[i].first*l<<' '<<data[i].second*l<<endl;
    }
    else if (op == 3)
        For(0,data.size())
            cout<<data[i].first<<' '<<0-data[i].second<<endl;
    else
        For(0,data.size())
            cout<<0-data[i].first<<' '<<data[i].second<<endl;
}

int main()
{
    int n,m,x,y;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        data.push_back(make_pair(x,y));
    }
    cin>>m;
    while(m--)
    {
        Solve();
    }

    return 0;
}
