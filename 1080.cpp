#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    int n;
    while(cin>>n)
    {
        int p = n;
        int data[32] = {0};
        int i = 0,len = 0;
        if (n<0)
            n = -n;
        if (n == 0)
        {
            cout<<p<<"-->"<<0<<endl;
            continue;
        }
        while(n!=0)
        {
            len++;
            data[i++] = n%2;
            n = n/2;
        }
        cout<<p<<"-->";
        if (p<0)
            cout<<'-';
        for (int i = len-1;i>=0;i--)
            cout<<data[i];
        cout<<endl;
    }

    return 0;
}
