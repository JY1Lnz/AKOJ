#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n;
    while(cin>>n)
    {
        int flag_last;
        vector<int> data_last;
        while(n--&&cin>>a)
        {
            data_last.push_back(a);
        }
        vector<int>::iterator it,small,big;

        flag_last = 0;
        it = data_last.end()-1;
        small = data_last.end()-1;
        big = it-1;
        while(*it > *big)
        {
            it--;
            big--;
            if(it == data_last.begin())
            {
                flag_last = 1;
                break;
            }
        }
        if (flag_last != 1)
        {
            while(*big < *small)
                small--;
            swap(*big,*small);
            reverse(it,data_last.end());
        }
        if (flag_last == 0)
        {
            for (auto x:data_last)
                cout<<x<<' ';
            cout<<endl;
        }
        else
            cout<<endl;

        flag_last = 0;
        it = data_last.end()-1;
        big = data_last.end()-1;
        small = it-1;
        while(*it<*small)
        {
            it--;
            small--;
            if (it == data_last.begin())
            {
                flag_last = 1;
                break;
            }
        }
        if (flag_last != 1)
        {
            while(*small > *big||*small == *big)
                big--;
            swap(*small,*big);
            reverse(it,data_last.end());
        }
        if (flag_last == 0)
        {
            for (auto x:data_last)
                cout<<x<<' ';
            cout<<endl;
        }
        else
            cout<<endl;

        flag_last = 0;
        it = data_last.end()-1;
        big = data_last.end()-1;
        small = it-1;
        while(*it<*small)
        {
            it--;
            small--;
            if (it == data_last.begin())
            {
                flag_last = 1;
                break;
            }
        }
        if (flag_last != 1)
        {
            while(*small > *big||*small == *big)
                big--;
            swap(*small,*big);
            reverse(it,data_last.end());
        }
        if (flag_last == 0)
        {
            for (auto x:data_last)
                cout<<x<<' ';
            cout<<endl;
        }
        else
            cout<<endl;


    }

    return 0;
}
