#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int num = n;
        int flag = 0;
        while(num != 0)
        {
            if (num %10 == 0)
            {
                flag = 1;
                break;
            }
            num/=10;
        }
        if (flag == 1)
        {
            cout<<"Unlucky"<<endl;
            continue;
        }
        int sum = 0;
        for (int i = 1;i <= n;i++)
        {
            int flag = 0;
            int num = i;
            while(num != 0)
            {
                if (num % 10 == 0)
                {
                    flag = 1;
                    break;
                }
                num /= 10;
            }
            if (flag == 1)
                sum++;
        }
        cout<<n-sum<<endl;
    }

    return 0;
}
