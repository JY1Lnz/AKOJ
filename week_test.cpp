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
    string s = "abc";
    cout<<find(s.begin(),s.end(),'d')-s.begin()<<endl;

    return 0;
}
