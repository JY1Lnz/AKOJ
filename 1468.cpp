#include<iostream>
#include<memory.h>
#include<fstream>
#include<algorithm>
using namespace std;
typedef long long LL;
const int maxn = 100+10;

int main()
{
    int n;
    cin>>n;
    LL data[n];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    int q,high;
    cin>>q;
    while(q--)
    {
        cin>>high;
        int flag = 0,sum = 0;
        for (int i = 0;i<n;i++)
            if (data[i] > high)
            {
                if (flag == 0)
                {
                    sum++;
                    flag = 1;
                }
            }
            else
                flag = 0;
        cout<<sum<<endl;
    }

    return 0;
}
