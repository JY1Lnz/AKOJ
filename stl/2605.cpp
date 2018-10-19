#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list_1;
    list<int>::iterator l_it = list_1.begin();

    int times;
    cin>>times;

    while(times--)
    {
        int op;
        cin>>op;
        if (op == 0)
        {
            int n;
            cin>>n;
            list_1.insert(l_it,n);
            l_it--;
        }
        else if (op == 1)
        {
            int weizhi;
            cin>>weizhi;
            if (weizhi >= 0)
            {
                while(weizhi--)
                    l_it++;
            }
            else
            {
                weizhi = -weizhi;
                while(weizhi--)
                    l_it--;
            }
        }
        else
        {
            list<int>::iterator l_t = l_it;
            l_it++;
            list_1.erase(l_t);
        }
    }
    for (l_it = list_1.begin();l_it != list_1.end();l_it++)
        cout<<*l_it<<endl;

    return 0;
}
