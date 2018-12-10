#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,q;
    while(cin>>m>>q)
    {
        int data[m+1];
        for (int i = 1;i<=m;i++)
            cin>>data[i];
        int l,r;
        while(q--)
        {
            cin>>l>>r;
            cout<<accumulate(data+l,data+r+1,0)<<endl;
        }
    }

    return 0;
}
