#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 3;
        for (int i = 1;i<=n;i++)
            sum = (sum-1)*2;
        cout<<sum<<endl;
    }

    return 0;
}
