#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int data[n];
        for (int i = 0;i<n;i++)
            cin>>data[i];
        if(n == 1)
        {
            cout<<data[0]<<endl;
            cout<<-1<<endl;
            continue;
        }
        sort(data,data+n);
        cout<<data[n-1]<<endl;
        for (int i = 0;i<n-1;i++)
            cout<<data[i]<<' ';
        cout<<endl;
    }

    return 0;
}
