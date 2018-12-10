#include<bits/stdc++.h>
using namespace std;
const int maxn = 8;
int data[maxn];


void search_1(int cur)
{
    if (cur == maxn)
    {
        for (int i = 0;i<maxn;i++)
            cout<<data[i];
        cout<<endl;
        return;
    }
    for (int i = 0;i<maxn;i++)
    {
        data[cur] = i;
        bool ok = true;
        for (int j = 0;j<cur;j++)
            if (data[cur] == data[j]||cur-data[cur] == j-data[j]||cur+data[cur] == j+data[j])
            {
                ok = false;
                break;
            }
        if (ok)
            search_1(cur+1);
    }
    return;

}


int main()
{
    search_1(0);

    return 0;
}
