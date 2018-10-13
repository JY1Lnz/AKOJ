#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        float a,b;
        int data[3][2];
        for (int i = 0;i<3;i++)
            for (int j = 0;j<2;j++)
                cin>>data[i][j];
        int panding = 0;
        for (int i = 0;i<3;i++)
            for (int j = 0;j<2;j++)
                if(data[i][j] != 0)
                    panding = 1;
        if (panding == 0)
            break;

        if (data[0][0] == data[1][0])
        {
             if (data[0][1] > data[1][1])
             {
                 if (data[2][0] < data[0][0])
                 {
                     printf("1\n");
                     continue;
                 }
                 else
                 {
                     printf("0\n");
                     continue;
                 }
             }
             else
             {
                 if (data[2][0] < data[0][0])
                 {
                     printf("0\n");
                     continue;
                 }
                 else
                 {
                     printf("1\n");
                     continue;
                 }
             }
        }
        else if(data[0][1] == data[1][1])
        {
            if (data[0][0] > data[1][0])
            {
                if (data[2][1] > data[0][1])
                {
                    printf("1\n");
                    continue;
                }
                else
                {
                    printf("0\n");
                    continue;
                }
            }
            else
            {
                if (data[2][1] > data[0][1])
                {
                    printf("0\n");
                    continue;
                }
                else
                {
                    printf("1\n");
                    continue;
                }
            }
        }
        else
        {
            a = float(data[1][1]-data[0][1])/float(data[1][0]-data[0][0]);
            b = data[0][1] - a*data[0][0];
            if (data[0][0] > data[1][0])
            {
                if (data[2][1] > a*data[2][0]+b)
                {
                    printf("1\n");
                    continue;
                }
                else
                {
                    printf("0\n");
                    continue;
                }
            }
            else
            {
                if (data[2][1] > a*data[2][0]+b)
                {
                    printf("0\n");
                    continue;
                }
                else
                {
                    printf("1\n");
                    continue;
                }
            }
        }
    }


    return 0;
}
