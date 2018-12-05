#include<bits/stdc++.h>
using namespace std;

int day[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
    int y,m;
    cin>>y>>m;
    if (y%4==0&&y%100!=0||y%400==0)
        day[2]+=1;
    cout<<day[m]<<endl;

    return 0;
}
