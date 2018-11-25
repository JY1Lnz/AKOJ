#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h;
    while(cin>>n>>h)
    {
        int a;
        int width = 0;
        for (int i = 0;i<n;i++)
            if (cin>>a&&a<=h)
                width+=1;
            else
                width+=2;
        cout<<width<<endl;
    }

    return 0;
}
