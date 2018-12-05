#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        n;
        int m1 = 0,m2 = 0,m3 = 0;
        int i = 1;
        for (;m1+m2+m3 < n;i++)
        {
            if (i == 1)
                m1 = 1;
            else
            {
                m3 += m2;
                m2 = m1;
                m1 = m3;
            }

            if (m1+m2+m3>=n)
                break;
        }
        cout<<i<<endl;
    }

    return 0;
}
