#include<bits/stdc++.h>
using namespace std;

void show(int n)
{
    cout<<n<<' ';
}
int main()
{
    int n,t;
    cin>>n>>t;
    list<int> data[n];
    while(t--)
    {
        int op;
        cin>>op;
        if (op == 0)
        {
            int w,num;
            cin>>w>>num;
            data[w].insert(data[w].end(),num);
        }
        else if(op == 1)
        {
            int w;
            cin>>w;
            if (data[w].empty())
            {
                cout<<endl;
                continue;
            }
            for_each(data[w].begin(),data[w].end(),show);
            cout<<endl;
        }
        else
        {
            int w1,w2;
            cin>>w1>>w2;
            data[w2].splice(data[w2].end(),data[w1]);
        }
    }

    return 0;
}
