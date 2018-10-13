#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times;
    cin>>times;
    int data[times];
    int weizhi = 0;
    while(times-- > 0)
    {
        int operate;
        int number;
        cin>>operate;
        if(operate == 0)
        {
            cin>>number;
            data[weizhi++] = number;
        }
        else if(operate == 1)
        {
            cin>>number;
            cout<<data[number]<<endl;
        }
        else
        {
            weizhi--;
        }

    }

    return 0;
}
