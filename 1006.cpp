#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int number_length = 0;
    int ip_duan = 1;
    while(scanf("%c",&c) != EOF)
    {
        if (c = '0'&&number_length == 0)
        {
            ip_duan = 1;
            cout<<'N'<<endl;
            continue;
        }
        if (c<='9'&&c>='0')
        {
            if (number_length == 3)
            {
                ip_duan = 1;
                number_length = 0;
                cout<<'N'<<endl;
                continue;
            }
            else
            {
                number_length++;

            }
        }
    }

    return 0;
}
