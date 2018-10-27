#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if (n == 1)
            cout<<'A'<<endl;
        else
        {
            int len = 2*(n-1);
            char data[len];
            for (int i = 0,j = 1;i<len;i+=2,j++)
            {
                data[i] = 'A';
                data[i+1] = 'A'+j;
            }
            for (int i = 0;i<len;i++)
                cout<<data[i];
            for (int i = len-2;i>=0;i--)
                cout<<data[i];
            cout<<endl;
        }
    }

    return 0;
}
