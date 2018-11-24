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
        int key = i;
        for (int j = i;j<n;j++)
            if (data[j] < data[key])
            {
                key = j;
            }
        if (i != key)
        {
            swap(data[i],data[key]);
            sum++;
        }
    }
    for (int i = 0;i<n;i++)
        cout<<data[i]<<' ';
    cout<<endl<<sum<<endl;

    return 0;
}
