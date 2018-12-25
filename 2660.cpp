#include<bits/stdc++.h>
using namespace std;

int t[100010],s[100010];

int main()
{
    int n,q;
    cin>>n;
    for (int i = 0;i<n;i++)
        cin>>t[i];
    cin>>q;
    for (int i = 0;i<q;i++)
        cin>>s[i];
    int sum = 0;
    for (int i = 0;i<q;i++)
    {
        int w = lower_bound(t,t+n,s[i])-t;
        if (t[w] == s[i]||t[w-1] == s[i])
            sum++;
    }
    cout<<sum<<endl;

    return 0;
}
/*
5
1 2 3 4 5
3
3 6 0
*/
