#include<bits/stdc++.h>
using namespace std;
//n个数选k个组合
//从上一个位置+1 进行下一步循环选数
//确保不会重复
int data[21];
int book[21];
int data_num[10000];
int sum = 0;
int x = 0;
bool su(int n)
{
    for (int i = 2;i*i<n;i++)
        if (n%i == 0)
            return false;
    return true;

}


void dfs(int step,int k,int n,int digital,int wei)
{
    if (step == k)
    {

        if (su(digital))
        {
            sum++;
            data_num[x++] = digital;
            //cout<<digital;
        }
        return;
    }
    for(int i = wei;i<=n;i++)
    {
        if (book[i] != 1)
        {
            book[i] = 1;
            dfs(step+1,k,n,digital+data[i],i+1);
            book[i] = 0;
        }
    }
    return;

}

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        for (int i = 0;i<21;i++)
        {
            data[i] = 0;
            book[i] = 0;
        }
        sum = 0;
        x = 0;
        for (int i = 1;i<=n;i++)
            cin>>data[i];
        dfs(0,k,n,0,1);
        cout<<sum<<endl;
        }
    return 0;
}
