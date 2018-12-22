#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int data[10010];
        for (int i = 0;i<n*m;i++)
            cin>>data[i];
        sort(data,data+n*m);
        while(1)
        {
            if (data[l-1]<data[l])
                break;
            l++;
            if (l > r)
                break;
        }
        if (l > r)
            cout<<-1<<endl;
        else
            cout<<l<<endl;
    }

    return 0;
}
