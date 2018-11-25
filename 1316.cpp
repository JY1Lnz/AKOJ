#include<bits/stdc++.h>
using namespace std;
int data[2100][2100];
int main()
{

    int n = 1;
    int l = 0,r = 0;
    int w = 0;
    while(w<2100)
    {
        l = w,r = 0;
        while(l>= 0,r<=w)
            data[l--][r++] = n++;
        w++;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<data[b][a]<<endl;
    }

    return 0;
}
