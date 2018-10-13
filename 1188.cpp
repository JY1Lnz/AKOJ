#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while( scanf("%d",&n) != EOF)
    {
        int data_l,data_r;
        data_l = n/2;
        data_r = n/2;

        while(1)
        {
            int data_l_bool = 0;
            int data_r_bool = 0;

            for (int i = 2;i < data_l/2+1;i++)
                if(data_l%i == 0)
                {
                    data_l_bool = 1;
                    break;
                }
            if (data_l_bool == 1)
            {
                data_r++;
                data_l--;
                continue;
            }
            for (int i = 2;i < data_r/2;i++)
                if (data_r%i == 0)
                {
                    data_r_bool = 1;
                    break;
                }
            if (data_r_bool == 1)
            {
                data_r++;
                data_l--;
                continue;
            }
            printf("%d %d\n",data_l,data_r);
            break;


        }
    }

    return 0;
}
