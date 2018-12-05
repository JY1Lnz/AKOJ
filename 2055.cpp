#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> data;
    int n,a,t;
    cin>>n;
    while(n--&&cin>>a)
        data.push_front(a);
    cin>>t;
    string op;
    int w,v;
    while(t--)
    {
        cin>>op;
        if (op[0] == 'i')
        {
            int flag = 0;
            cin>>w>>v;
            w--;
            auto it = data.begin();
            while(w--)
            {
                it++;
                if (it == data.end())
                {
                    cout<<"insert fail\n";
                    flag = 1;
                    break;
                }
            }
            if (flag)
                continue;
            data.insert(it,v);
            cout<<"insert OK\n";
        }
        else if (op[0] == 'd')
        {
            cin>>w;
            if (data.empty())
            {
                cout<<"delete fail\n";
                continue;
            }
            w--;
            int flag = 0;
            auto it = data.begin();
            while(w--)
            {
                it++;
                if (it == data.end())
                {
                    cout<<"delete fail\n";
                    flag = 1;
                    break;
                }
            }
            if (flag)
                continue;
            data.erase(it);
            cout<<"delete OK\n";
        }
        else if (op[0] == 's')
        {
            if (data.empty())
            {
                cout<<"Link list is empty\n";
                continue;
            }
            for (auto x:data)
                cout<<x<<' ';
            cout<<endl;
        }
        else
        {
            cin>>w;
            w--;
            int flag = 0;
            auto it = data.begin();
            while(w--)
            {
                it++;
                if (it == data.end())
                {
                    cout<<"get fail\n";
                    flag = 1;
                    break;
                }
            }
            if (flag)
                continue;
            cout<<*it<<endl;
        }
    }

    return 0;
}
/*
3 3 2 1
21
show
delete 1
show
delete 2
show
delete 1
show
delete 2
insert 2 5
show
insert 1 5
show
insert 1 7
show
insert 2 5
show
insert 3 6
show
insert 1 8
show
get 2
*/
