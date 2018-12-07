#include<bits/stdc++.h>
using namespace std;

const int maxn = 40;
long long data[maxn] = {1,1};

int main()
{
    for (int i = 2;i<maxn;i++)
        data[i] = data[i-1]+data[i-2];
    int n;
    while(cin>>n)
    {
    int w = lower_bound(data,data+maxn,n)-data;
    int small = min(abs(data[w]-n),abs(data[w-1]-n));
    cout<<small<<endl;
    }

    return 0;
}
