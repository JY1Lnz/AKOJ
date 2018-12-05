#include<bits/stdc++.h>
using namespace std;

int data[22][22];

int main()
{

    int n;
    while(cin>>n)
    {
        memset(data,0,sizeof(data));
        for (int i = 0;i<n;i++)
            for (int j = 0;j<n;j++)
                if (i==0||i==(n-1)||j==0||j==(n-1))
                    continue;
                else
                    data[i][j] = 1;
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<n;j++)
                if (data[i][j]==0)
                    cout<<'O';
                else
                    cout<<' ';
            cout<<endl;
        }
        cout<<endl;

    }
}
