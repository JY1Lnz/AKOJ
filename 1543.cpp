#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;
    while(cin>>n)
    {
    int data[n],i = 1;
    set<int> da;
    map<int,int> x;
    for (int i = 0;i<n;i++)
    {
        cin>>data[i];
        da.insert(data[i]);
    }
    for (auto m:da)
        x[m] = i++;
    for (int i = 0;i<n;i++)
        cout<<x[data[i]]<<' ';
    cout<<endl;
    }

    return 0;
}
