#include<bits/stdc++.h>
using namespace std;
int book[200010];
int small;
void dfs(int path[][2000],int n,int i,int over,int step)
{
        for (int j = 1;j<=n;j++)
        {
            //if (j == i)
                //continue;
            if (path[i][j] == 1&&book[j] == 0)
            {
                book[j] = 1;
                if (j == over)
                {
                    book[j] = 0;
                    if (small > step)
                    {
                        small = step;
                    }
                    return;
                }
                dfs(path,n,j,over,step+1);
                book[j] = 0;
            }
        }
        return;
}

int main()
{
    int n;
    while(cin>>n)
    {
        memset(book,0,sizeof(book));
        int path[6][2000] = {0};
        small = 99999;
        int a;
        for (int i = 1;i<=n;i++)
        {
            cin>>a;
            path[i][a] = 1;
        }

        for (int i = 1;i<=n;i++)
            dfs(path,n,i,i,0);
        cout<<small+1<<endl;

    }

    return 0;
}
/*
5
2 4 2 3 1
11
8 7 5 8 8 2 6 3 2 9 10
*/
/*
        cout<<"  ";
        for (int i = 1;i<=n;i++)
            cout<<i<<' ';
        cout<<endl;
        for (int i = 1;i<=n;i++)
        {
            cout<<i<<' ';
            for (int j = 1;j<=n;j++)
                cout<<path[i][j]<<' ';
            cout<<endl;
        }
        */
