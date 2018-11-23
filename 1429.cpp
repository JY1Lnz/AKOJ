#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n,m;
        cin>>n;
        cin>>a>>b>>c;
        cin>>m;
        if (n*c > m)
        {
            cout<<"Oh, my god!\n";
            continue;
        }
        int cha = a-c;
        int x = (m-n*c)/cha;
        cout<<x<<endl;
    }

    return 0;
}
