#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    for (int i = a;i<=b;i++)
    {
         int flag = 1;
         int x = i;
         cout<<i<<'=';
         for (int j = 2;j<=i;)
         {
             if (flag&&x%j == 0)
             {
                 cout<<j;
                 x/=j;
                 flag = 0;
             }
             else if (!flag&&x%j == 0)
             {
                cout<<'*'<<j;
                x/=j;
             }
             else
                j++;
         }
         cout<<endl;
    }

    return 0;
}
