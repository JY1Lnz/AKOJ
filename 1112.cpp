#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int data[9];
        for (int i = 0;i<9;i++)
            cin>>data[i];
        for (int i = 8;i>=0;i--)
            if (data[i]<data[0])
                cout<<data[i]<<' ';
        cout<<data[0]<<' ';
        for (int i = 0;i<9;i++)
            if (data[i]>data[0])
                cout<<data[i]<<' ';
        cout<<endl;
    }

    return 0;
}
