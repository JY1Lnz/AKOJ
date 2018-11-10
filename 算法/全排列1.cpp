//全排列字典序方法
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n;
    cin>>n;
    vector<int> data;
    vector<int>::iterator it,small,big;

    while(n--&&cin>>a)
        data.push_back(a);
    for (auto x:data)
        cout<<x;
    cout<<endl;
    while(1)
    {
        int flag = 0;
        it = data.end()-1;
        big = data.end()-1;
        small = it-1;
        while(*it<*small)
        {
            it--;
            small--;
            if (it == data.begin())
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;;
        while(*small > *big||*small == *big)
            big--;
        swap(*small,*big);
        reverse(it,data.end());
        for (auto x:data)
            cout<<x;
        cout<<endl;


    }


    return 0;
}
