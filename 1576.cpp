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
        sort(data,data+n);
        cout<<abs(data[n-1]-data[0])<<endl;
    }

    return 0;
}
