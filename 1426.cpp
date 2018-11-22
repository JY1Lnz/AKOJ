#include<bits/stdc++.h>
using namespace std;

/*
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int data[n];
        for (int i = 0;i<n;i++)
            cin>>data[i];
        int sum = 0,a = 0;
        for (int i = 0;i<n;i++)
        {
            for (int j = i;j<n;j++)
            {
                a += data[j];
                if (a > sum)
                    sum = a;
            }
            a = 0;
        }
        cout<<sum<<endl;
    }

    return 0;
}
*/

//¾«¼òËã·¨
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum,cur,x,n;
        cin>>n;
        cin>>x;
        cur = x;
        sum = cur;
        while(--n)
        {
            cin>>x;
            cur = cur<0?x:cur+x;
            if (cur > sum)
                sum = cur;
        }
        cout<<sum<<endl;
    }
}
