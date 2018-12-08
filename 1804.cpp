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
        int sum = 0;
        for (int i = 1,j = n;i<=n;i++,j--)
            sum += i*j;
        cout<<sum<<endl;
    }

    return 0;
}

¡£
