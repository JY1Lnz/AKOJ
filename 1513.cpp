#include<bits/stdc++.h>
using namespace std;

long long bei(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 10;
    return 10*bei(n-1);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,x;
        int m,k,w = 0;
        cin>>n>>m>>k;
        x = n;
        while(x != 0)
        {
            x/=10;
            w++;
        }
        for (int i = 1;i<=m;i++)
            n = n + 9*bei(w+i-1);

        int data[w+m]= {0};
        for (int i = w+m-1;i>=0;i--)
        {
            data[i] = n%10;
            n /= 10;
        }
        //for (int i = 0;i<w+m;i++)
            //cout<<data[i];
        int j = 0;
        for (int i = 0;i<w+m-1;i++)
        {
            if (data[i] < data[i+1])
            {
                data[i] = -1;
                j++;
            }
            if (j == k)
                break;
        }
        int bei_1 = w+m;
        for (int i = 0;i<w+m;i++)
            if (data[i] == -1)
                bei_1--;
        int b = 1;
        long long sum = 0;
        for (int i = w+m-1;i>=0;i++)
        {
            if (data[i] != -1)
            {
                int a = data[i];
                sum = sum + a*bei(b);
                b++;
            }
        }
        cout<<sum;
    }

    return 0;
}
