#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int data[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    while(cin>>n)
    {
        int x,y;
        while(n--)
        {
            cin>>x>>y;
            cout<<data[x][y];
        }
        cout<<endl;

    }

    return 0;
}
