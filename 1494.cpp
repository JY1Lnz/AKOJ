#include<bits/stdc++.h>
using namespace std;

double data[6][6];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int target,first;
        cin>>target;
        for (int i = 1;i<=5;i++)
            for (int j = 1;j<=5;j++)
                cin>>data[i][j];
        cin>>first;

        for (int i = 1;i<target;i++)
        {
            int maxi = 1;
            for (int j = 1;j<=5;j++)
                if (data[j][first] > data[maxi][first])
                    maxi = j;
            first = maxi;
        }
        cout<<first<<endl;
    }

    return 0;
}
