#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        char host[n],guest[m];
        int host_sum = 0,guest_sum = 0;
        for (int i = 0;i<n;i++)
            cin>>host[i];
        for (int i = 0;i<m;i++)
            cin>>guest[i];
        int host_a = 0,guest_a = 0;
        for (int i = 0;i<n;i++)
        {
            if (host[i] <= '9'&&host[i]>='2')
                host_sum += host[i]-48;
            else
            {
                switch(host[i])
                {
                    case 'J':
                    case 'Q':
                    case 'K':
                    case '10':
                            host_sum += 10;
                            break;
                }
            }

            if (host[i] == 'A')
                host_a++;
        }
        for (int i = 0;i<m;i++)
        {
            if (guest[i] <= '9'&&guest[i]>='2')
                guest_sum += guest[i]-48;
            else
            {
                switch(guest[i])
                {
                    case 'J':
                    case 'Q':
                    case 'K':
                    case '10':
                            guest_sum += 10;
                            break;
                }
            }

            if (guest[i] == 'A')
                guest_a++;
        }
        host_sum += host_a;
        guest_sum += guest_a;
        for (int i = 1;i<=host_a;i++)
        {
            if (host_sum+10 > 21)
                break;
            host_sum += 10;
        }
        for (int i = 1;i<=guest_a;i++)
        {
            if (guest_sum+10 > 21)
                break;
            guest_sum += 10;
        }
        if (host_sum > 21)
            host_sum = 0;
        if(guest_sum > 21)
            guest_sum = 0;
        if (host_sum>=guest_sum)
            cout<<host_sum<<" vs "<<guest_sum<<" HOST WIN"<<endl;
        else
            cout<<host_sum<<" vs "<<guest_sum<<" GUEST WIN"<<endl;
    }

    return 0;
}
