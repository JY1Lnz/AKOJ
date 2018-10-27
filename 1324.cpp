#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int data[100] = {-1};
        int n,len = 0,small;
        cin>>n;
        while(n != 0)
        {
            data[len] = n%10;
            len++;
            n/=10;
        }

        int k;
        for (k = len-1;k>0;k--)
            if (data[k-1] > data[k])
                break;
        for (int i = k;i<len-1;i++)
            data[i] = data[i+1];
        int sum = 0;
        for (int i = 0;i<len-1;i++)
        {
            int bei = 1;
            for (int j=0;j<i;j++)
                bei *= 10;
            sum += data[i]*bei;
        }
        cout<<sum<<endl;
    }

    return 0;
}
