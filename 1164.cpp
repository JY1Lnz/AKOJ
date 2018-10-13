#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int data[10][3] = {0};
    int phone_type;
    int phone_number;
    int weizhi_0=0,weizhi_1=0,weizhi_2=0;
    while(cin>>phone_type)
    {
        if (phone_type == EOF)
            break;
        cin>>phone_number;
        switch(phone_type)
        {
            case 0:
                data[weizhi_0++][0] = phone_number;
                if (weizhi_0 == 10)
                    weizhi_0 = 0;
                break;
            case 1:
                data[weizhi_1++][1] = phone_number;
                if (weizhi_1 == 10)
                    weizhi_1 = 0;
                break;
            case 2:
                data[weizhi_2++][2] = phone_number;
                if (weizhi_2 == 10)
                    weizhi_2 = 0;
                break;
            default:
                break;
        }
    }
    for (int i = 0;i<10;i++)
    {
        for (int j = 0;j<3;j++)
            printf("%d ",data[i][j]);
        cout<<endl;
    }

    return 0;
}
