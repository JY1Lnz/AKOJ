#include<bits/stdc++.h>
using namespace std;


char data[10][10];
int flag = 0;
void dfs()
{

}

int main()
{

    int startx,starty;
    for (int i = 0;i<10;i++)
        for (int j = 0;j<10;j++)
        {
            cin>>data[i][j];
            if (data[i][j] == 'S')
            {
                startx = i;
                starty = j;
            }
        }



    return 0;
}
