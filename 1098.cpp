#include<bits/stdc++.h>
using namespace std;

int j(int n)
{
    if (n == 1)
        return 1;
    return n*j(n-1);
}

int main()
{
    int data[27] = {0};
    int value[26] = {0};
    int n;
    cin>>n;
    int num = 0;
    char s;
    for (int i = 1;i<=n;i++)
    {
        cin>>s;
        data[s-96]++;
    }
    for (int i = 1;i<=n;i++)
    {
        if (data[i] > 0)
        {
            value[num] = data[i];
            num++;
        }
    }
    long long sum = 1;
    for (int i = 0;i<num;i++)
        sum = sum * j(value[i]);
    cout<<j(n)/sum;

    return 0;
}
