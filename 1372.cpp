#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int data[n];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    sort(data,data+n);
    int sum = 1;
    int mark = data[0];
    for (int i = 1;i<n;i++)
    {
        if (data[i]>mark+k)
        {
            mark = data[i];
            sum++;
        }
    }
    cout<<sum<<endl;

    return 0;
}
