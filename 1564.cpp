#include<bits/stdc++.h>
using namespace std;

int data[22][22];

int main()
{

    int n;
    while(cin>>n)
    {
        if (n == 1)
        {
            cout<<1<<endl;
            continue;
        }
        for (int i = 2;i<=n;i++)
        {
            if (i*2+(i-2)*2 == n)
            {
                cout<<i<<endl;
                break;
            }
            if (i*2+(i-2)*2 > n)
            {
                cout<<-1<<endl;
                break;
            }
        }
    }

}
