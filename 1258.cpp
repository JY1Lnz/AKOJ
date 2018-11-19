#include<bits/stdc++.h>
using namespace std;

void dan(int data[20][20],int sum,int t,int l,int r,int n,int qi,int w)
{
    if (t == 0)
        {
            data[l][r] = sum;
            return;
        }
    while(t--)
    {
        data[l][r] = sum++;


        if (l == qi&&r < w-1)
            r++;
        else if (l <= w-2&&r == w-1)
            l++;
        else if (l == w-1&&r <= w-1&&r != qi)
            r--;
        else if (l <= w-1&&r == qi&&l != qi)
            l--;

    }


}

int main()
{
    int n;
    cin>>n;
    int data[20][20] = {0};
    int sum = 1;
    int l = 0,r = 0;
    //if (n%2 == 1)
    {
        int qi = 0;
        int w = n;
        for (int i = n;i>=1;i-=2)
        {

            int t = 4*i-4;
            dan(data,sum,t,l,r,i,qi,w--);
            qi++;
            l++;
            r++;
            sum += t;
        }
    }
    //else
    {

    }

    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
            cout<<data[i][j]<<' ';
        cout<<endl;
    }

    return 0;
}
