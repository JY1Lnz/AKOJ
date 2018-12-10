#include<bits/stdc++.h>
using namespace std;

char str[10000];
int maxn;
void revers(int n)
{
    if (n == (maxn-1)/2)
    {
        if (maxn%2 == 0)
        {
            char tmp = str[n+1];
            str[n+1] = str[n];
            str[n] = tmp;
            for (int i = 0;i<maxn;i++)
                cout<<str[i];
            cout<<endl;
        }
        else
            ;
        return;
    }
    char tmp = str[maxn-n-1];
    str[maxn-n-1] = str[n];
    str[n] = tmp;
    for (int i = 0;i<maxn;i++)
        cout<<str[i];
    cout<<endl;
    revers(n+1);

}

int main()
{
    cin>>maxn;
    for (int i = 0;i<maxn;i++)
        cin>>str[i];
    revers(0);
    cout<<endl;
    for (int i = 0;i<maxn;i++)
        cout<<str[i];
    cout<<endl;

    return 0;
}
