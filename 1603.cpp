#include<bits/stdc++.h>
using namespace std;

int data[210][210];
int boo[210][210];

int main()
{
    ifstream cin ("test.in");
    int x,y;
    cin>>x>>y;
    {
        vector<int> c;
        int data[x][y] = {0};
        int boo[x][y] = {0};
        for (int i = 0;i<x;i++)
            for (int j = 0;j<y;j++)
                cin>>data[i][j];
        int l = 0,r = 0;
        int n = 0;
        while(n<x*y)
        {
            while(l<x)
            {
                if (boo[l][r] == 1)
                    break;
                boo[l][r] = 1;
                cout<<data[l++][r]<<' ';

                n++;
            }
            l--;
            r++;
            while(r<y)
            {
                if (boo[l][r] == 1)
                    break;
                boo[l][r] = 1;
                cout<<data[l][r++]<<' ';

                n++;
            }
            l--;
            r--;
            while(l>=0)
            {
                if (boo[l][r] == 1)
                    break;
                boo[l][r] = 1;
                cout<<data[l--][r]<<' ';

                n++;
            }
            l++;
            r--;
            while(r>=0)
            {
                if (boo[l][r] == 1)
                    break;
                boo[l][r] = 1;
                cout<<data[l][r--]<<' ';
                n++;
            }
            l++;
            r++;
        }
        cout<<endl;
    }

    return 0;
}
