#include<bits/stdc++.h>
using namespace std;

long long bei(int n)
{
    if (n == 1)
        return 1;
    return 10*bei(n-1);
}

struct node{
    char s[1000];
};

int main()
{
    int m;
    cin>>m;
    //char data[m][1000];
    struct node data[m];
    for (int i = 0;i<m;i++)
        cin>>data[i].s;
    for (int i = 0;i<m;i++)
        for (int j = 0;j<m;j++)
            if (strlen(data[i].s)<strlen(data[j].s))
            {
                struct node tmp = data[j];
                data[j] = data[i];
                data[i] = tmp;
            }
    for (int i = 0;i<m;i++)
        cout<<data[i].s<<endl;

    return 0;
}
