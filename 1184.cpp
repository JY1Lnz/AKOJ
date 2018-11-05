#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,m,n,l,b = 1;
    cin>>x>>y>>m>>n>>l;
    long long c_x,c_y;
    c_x = x;
    c_y = y;
    x = (x+m)%l;
    y = (y+n)%l;
    //cout<<x<<' '<<y<<endl;
    while(1)
    {
        if (x == y)
        {
            cout<<b<<endl;
            break;
        }
        if (x == c_x&&y == c_y)
        {
            cout<<"Impossible"<<endl;
            break;
        }
        x = (x+m)%l;
        y = (y+n)%l;
        b++;
        //cout<<x<<' '<<y<<endl;

    }

    return 0;
}
