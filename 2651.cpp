#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum = 0;
    cin>>n;
    int data[n];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    for (int i = 0;i<n;i++)
    {
        for (int j = n-1;j>=i+1;j--)
            if (data[j] < data[j-1])
            {
                swap(data[j],data[j-1]);
                sum++;
            }
    }
    for (int i = 0;i<n;i++)
        cout<<data[i]<<' ';
    cout<<endl<<sum<<endl;

    return 0;
}
