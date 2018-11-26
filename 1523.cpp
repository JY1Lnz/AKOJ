#include<bits/stdc++.h>
using namespace std;

int data[8][8];

int main()
{
    int x,y;
    while(cin>>y>>x)
    {
        memset(data,0,sizeof(data));
        int a[8] = {0},b[8] = {0};
        int i = 0;
        while(x != 0)
        {
            a[i++] = x%2;
            x/=2;
        }
        i = 0;
        while(y != 0)
        {
            b[i++] = y%2;
            y/=2;
        }
        for (int i = 0,n = 7;i<8;i++,n--)
            for (int j = 0,m = 7;j<8;j++,m--)
                data[i][j] = a[n]*b[m];
        for (int i = 0;i<8;i++)
        {
            for (int j = 0;j<8;j++)
                if (data[i][j])
                    cout<<'+';
                else
                    cout<<'-';
            cout<<endl;
        }
    }

    return 0;
}
