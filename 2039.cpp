#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        while(n%2 == 0)
            n/=2;
        while(n%3 == 0)
            n/=3;
        while(n%5 == 0)
            n/=5;
        int flag = 1;
        int zhi = 1;
        for (int i = 2;i*i<=n;i++)
            if (n%i == 0)
            {
                zhi = 0;
                flag = 0;
                break;
            }
        if (n == 1)
            zhi = 0;
        //cout<<zhi<<' '<<n<<endl;
        if (flag&&!zhi)
            cout<<"Accepted\n";
        else
            cout<<"Wrong\n";
    }

    return 0;
}
