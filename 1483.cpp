#include<bits/stdc++.h>
using namespace std;

const int maxn = 50+10;
bool a[50],b[50];
int N,K,Mod;
long long One,Two;
long long sum = 0;

void dfs_b(int n,int i)
{
    if (n == K)
    {

        if (One > Two)
        {
            //cout<<"Two:"<<Two<<endl;
            sum = 1 + sum%Mod;
        }
        return;
    }
    for (;i<=N;i++)
    {
        if (!b[i])
        {
            b[i] = true;
            Two += i;
            dfs_b(n+1,i+1);
            b[i] = false;
            Two -= i;
        }
    }
}

void dfs_a(int n,int i)
{
    if (n == K)
    {
        //cout<<"One:"<<One<<endl;
        dfs_b(0,1);
        return;
    }
    for (;i<=N;i++)
    {
        if (!a[i])
        {
            a[i] = true;
            One += i;
            dfs_a(n+1,i+1);
            a[i] = false;
            One -= i;
        }
    }

}


int main()
{
    fill(a,a+maxn,false);
    fill(b,b+maxn,false);
    cin>>N>>K>>Mod;
    dfs_a(0,1);
    cout<<sum<<endl;

    return 0;
}
