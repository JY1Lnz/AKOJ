#include<bits/stdc++.h>
using namespace std;

int data[9];

void dfs(int p,int w,int n)
{
    if (w == n)
    {
        for (int i = 0;i<w;i++)
            cout<<data[i];
        cout<<endl;
        return;
    }
    for (int i = 1;i<=p;i++)
    {
        data[w] = i;
        dfs(p,w+1,n);
    }
    return;

}

int main()
{
    int n,p;
    cin>>n>>p;
    dfs(p,0,n);


    return 0;
}
