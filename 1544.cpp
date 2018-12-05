#include<bits/stdc++.h>
using namespace std;

int data[32] = {0,1,1};

int main()
{
    for (int i = 3;i<32;i++)
        data[i] = data[i-1]+data[i-2];
    for (int i = 2;i<32;i++)
        data[i] = data[i]+data[i-1];
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<data[n]<<endl;
    }

    return 0;
}
