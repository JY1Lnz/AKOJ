#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int Area = 0;
        int sum = 100;
        int data[n][m];
        for (int i = 0;i<n;i++)
            for (int j = 0;j<m;j++)
            {
                cin>>data[i][j];
                if (data[i][j] == EOF)
                    return 0;
            }
        for (int i = 0;i<n;i++)
            for (int j = 0;j<m;j++)
            {
                if (data[i][j] == 1)
                {
                    Area++;
                    for (int x = 0;x<m;x++)
                        data[i][x] = -1;
                    for (int x = 0;x<n;x++)
                        data[x][j] = -1;
                    for (int x = i-1,l_y = j-1,r_y = j+1;x>=0;x--,l_y--,r_y++)
                    {
                        if (l_y >= 0 && l_y < m)
                            data[x][l_y] = -1;
                        if (r_y >= 0 && r_y < m)
                            data[x][l_y] = -1;
                    }
                    for (int x = i+1,l_y = j-1,r_y = j+1;x<n;x++,l_y--,r_y++)
                    {
                        if (l_y >= 0 && l_y < m)
                            data[x][l_y] = -1;
                        if (r_y >= 0 && r_y < m)
                            data[x][l_y] = -1;
                    }
                }
            }
            /*
        for (int i = 0;i<n;i++)
        {
            for (int j = 0;j<m;j++)
                cout<<data[i][j]<<' ';
            cout<<endl;
        }
        */
        cout<<sum-Area*10<<endl;
    }


    return 0;
}
