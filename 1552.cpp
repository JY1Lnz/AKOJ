#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double data[n];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    sort(data,data+n);
    cout<<data[n-1];

    return 0;
}
