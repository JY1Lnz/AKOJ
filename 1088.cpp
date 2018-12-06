#include<bits/stdc++.h>
using namespace std;
int money[7] = {1,2,5,10,20,50,100};

int getad(int n)
{
    int w = lower_bound(money,money+7,n)-money;
    if (money[w] == n)
        return w;
    else
        return w-1;
}

int main()
{
    int n;
    while(cin>>n&&n)
    {
        int data[n];
        for (int i = 0;i<n;i++)
            cin>>data[i];
        int sum = 0;
        for (int i = 0;i<n;i++)
        {
            while(data[i]>0)
            {
                int w = getad(data[i]);
                data[i] -= money[w];
                sum++;
            }
        }

        cout<<sum<<endl;
    }

    return 0;
}
