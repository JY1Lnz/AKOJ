#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
    int all[100000] = {0},truth[100000] = {0};
    int a;
    for (int i = 0;i<n;i++)
        cin>>all[i];
    for (int i = 0;i<m;i++)
        cin>>truth[i];
    cin>>a;

    for (int i = 0;i<n;i++)
        for (int j = i+1;j<n;j++)
        {
            if (all[i] > all[j])
            {
                int t = all[j];
                all[j] = all[i];
                all[i] = t;
            }
        }
    for (int i = 0;i<m;i++)
        for (int j = i+1;j<m;j++)
            if (truth[i] > truth[j])
            {
                int t = truth[j];
                truth[j] = truth[i];
                truth[i] = t;
            }


    for (int i = 0;i<n;i++)
    {
        if (all[i] != truth[i])
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
