#include<bits/stdc++.h>
using namespace std;

int data[100] = {0,1,1};

void fibo()
{
    for (int i = 3;i<100;i++)
    {
        int sum = data[i-1]+data[i-2];
        sum %= 10;
        data[i] = sum;
    }
}
int main()
{
    fibo();
    //for (int i = 0;i<100;i++)
        //cout<<data[i]<<' ';
    //cout<<endl<<data[39]<<endl;
    long long a;
    while(cin>>a)
    {
        cout<<data[a%60]<<endl;
    }


    return 0;
}
