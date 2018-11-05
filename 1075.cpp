#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int sum,value = 0;
    int data[n+1] = {0};
    for (int i = 1;i<=n;i++)
    {
        cin>>a;
        data[a]++;
    }
    for (int i = 1;i<=n;i++)
    {
        if (data[i] > value)
        {
            sum = i;
            value = data[i];
        }
    }
    cout<<sum<<endl<<value<<endl;


    return 0;
}
