#include<bits/stdc++.h>
using namespace std;

int move_lu[8][2] = {{1,2},{2,1},{2,-1},{1,-2},
                    {-1,-2},{-2,-1},{-2,1},{-1,2}};

int main()
{
    int t;
    cin>>t;
    int qipan[9][9] = {0};
    while(t--)
    {
        int sum = 0;
        char data[3];
        cin>>data;
        int x = data[1]-48;
        int y = data[0]-96;
        int tx,ty;
        for (int i = 0;i<8;i++)
        {
            tx = x + move_lu[i][0];
            ty = y + move_lu[i][1];
            if (tx>0&&tx<9&&ty>0&&ty<9)
                sum++;
        }

        cout<<sum<<endl;


    }

    return 0;
}
