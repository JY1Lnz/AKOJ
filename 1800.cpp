#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    int a,b,c;
    cin>>a>>b>>c;
    for(int i = a; i<=b;i++)
    {
        if (i%c == 0)
            cout<<i<<' ';
    }
    cout<<endl;

    return 0;
}
