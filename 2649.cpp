#include<bits/stdc++.h>
using namespace std;

bool su(int n)
{
    for (int i = 2;i*i <= n;i++)
        if (n%i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin>>n;
    int data[n];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    int sum = 0;
    for (int i = 0;i<n;i++)
        if (su(data[i]))
            sum++;
    cout<<sum<<endl;
}
