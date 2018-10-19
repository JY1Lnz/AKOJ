#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> deque_1;
    int times;
    cin>>times;
    while(times--)
    {
        int op;
        cin>>op;
        if (op == 0)
        {
            int weizhi;
            cin>>weizhi;
            if (weizhi == 0)
            {
                int n;
                cin>>n;
                deque_1.push_front(n);
            }
            else
            {
                int n;
                cin>>n;
                deque_1.push_back(n);
            }
        }
        else if (op == 1)
        {
            int weizhi;
            cin>>weizhi;
            cout<<deque_1.at(weizhi)<<endl;
        }
        else
        {
            int weizhi;
            cin>>weizhi;
            if (weizhi == 0)
            {
                deque_1.pop_front();
            }
            else
            {
                deque_1.pop_back();
            }
        }
    }

    return 0;
}
