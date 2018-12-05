#include<bits/stdc++.h>
using namespace std;

bool win_lose(char a,char b)
{
    if (a == 'R')
        if (b == 'P')
            return false;
        else if (b == 'S')
            return true;
    if (a == 'P')
        if (b == 'S')
            return false;
        else if (b == 'R')
            return true;
    if (a == 'S')
        if (b == 'R')
            return false;
        else if (b == 'P')
            return true;
}

int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        if (a[0] == b[0])
        {
            cout<<"draw\n";
            continue;
        }
        if (win_lose(a[0],b[0]))
            cout<<"win\n";
        else
            cout<<"lose\n";
    }

    return 0;
}
