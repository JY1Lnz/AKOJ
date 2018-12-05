#include<bits/stdc++.h>
using namespace std;

int data[20];
int book[20];
int flag;
int k;
void dfs(int j,int n,int sum)
{
    //cout<<"sum:"<<sum<<endl;
    if (sum == k)
    {
        flag = 1;
        return;
    }
    for (int i = j+1;i<n;i++)
    {
        if (book[i] == 0)
        {
            book[i] = 1;
            dfs(i,n,sum+data[i]);
            book[i] = 0;
        }
    }
    return;
}


int main()
{
    int n;
    while(cin>>n)
    {
        k = 0;
        flag = 0;
        memset(data,0,sizeof(data));
        for (int i = 0;i<n;i++)
        {
            cin>>data[i];
            k+=data[i];
        }

        if (k %2 != 0)
        {
            cout<<"Sorry,I can't!\n";
            continue;
        }
        k /= 2;
        //cout<<"k:"<<k<<endl;
        dfs(0,n,0);
        if (flag)
            cout<<"Of course,I can!\n";
        else
            cout<<"Sorry,I can't!\n";
    }

    return 0;
}
