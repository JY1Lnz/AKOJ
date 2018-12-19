#include<iostream>

using namespace std;

int main()
{
    int t,cnt = 0;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        printf("Case #%d:\n",++cnt);
        for (int j = 1;j<n;j++)
        {
            for (int i = j-n+1;i<=j;i++)
            {
                if (i<=0)
                    cout<<' ';
                if (i<n&&i>0)
                    cout<<i;
                if (i == j)
                    break;
                cout<<' ';
            }
            for (int i = j-1;i>0;i--)
                cout<<' '<<i;
            cout<<endl;

        }
        cout<<1;
        for (int i = 2;i<=n;i++)
            cout<<' '<<i;
        for (int i = n-1;i>0;i--)
            cout<<' '<<i;
        cout<<endl;
        for (int j = n-1;j>0;j--)
        {
            for (int i = j-n+1;i<=j;i++)
            {
                if (i<=0)
                    cout<<' ';
                if (i<n&&i>0)
                    cout<<i;
                if (i == j)
                    break;
                cout<<' ';
            }
            for (int i = j-1;i>0;i--)
                cout<<' '<<i;
            cout<<endl;

        }

        cout<<endl;

    }

    return 0;
}
