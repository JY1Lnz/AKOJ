#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a;
    while(cin>>n>>m)
    {
    long long all[n],truth[m];
    for (int i = 0;i<n;i++)
        cin>>all[i];
    for (int i = 0;i<m;i++)
        cin>>truth[i];
    cin>>a;
    for (int i = 0;i<n;i++)
        for (int j = i+1;j<n;j++)
            if (all[i] > all[j])
            {
                long long t = all[j];
                all[j] = all[i];
                all[i] = t;
            }

    for (int i = 0;i<n;i++)
    {
        int flag = 0;
        for (int j = 0;j<m;j++)
        {
            if (all[i] == truth[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            if (all[i] == a)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;

            break;
        }
    }
    }

    return 0;
}
