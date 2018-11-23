#include<bits/stdc++.h>
using namespace std;

int finda(vector<int> data,int n)
{
    vector<int>::iterator it = data.begin();

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> data;
        int n,m;
        cin>>n>>m;
        int book[n+1] = {0};
        int a,b;
        while(m--)
        {
            cin>>a>>b;
            if (data[a] == 0&&data[b] == 0)
            {
                data[a] = 1;
                data[b] = 1;
                data.push_back(a);
                data.push_back(b);
            }


        }

    }

    return 0;
}
