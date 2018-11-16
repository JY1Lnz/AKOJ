#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int len,a;
        vector<int> data;
        cin>>len;
        int l = len;
        while(l--&&cin>>a)
            data.push_back(a);
        if (data[0] == data[1])
        {
            cout<<0<<endl;
            continue;
        }



    }

    return 0;
}
