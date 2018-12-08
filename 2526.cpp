#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt = 0;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        double I,sum = 0.0;
        for (int i = 0;i<n;i++)
        {
            cin>>I;
            sum+=I;
        }
        printf("Case %d: ",++cnt);
        if (n == 0||n == 1)
            cout<<"yes";
        else if (sum > 15)
            cout<<"no";
        else if (n > (m*2+1))
            cout<<"no";
        else
            cout<<"yes";
        cout<<endl;

    }

    return 0;
}
