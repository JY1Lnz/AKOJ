#include<bits/stdc++.h>
using namespace std;

void cycle(int x);//��������
int main()
{
    int x;
    int n;
    cin>>x;
    cycle(x);

    return 0;
}

void cycle(int x)//��������
{
    x--;
    if (x == -1)
    {
        //cout<<"hello world"<<endl;
        return;
    }

    for (int i = 0;i<=5;i++)
    {
        cout<<i;
        cycle(x);
        cout<<i<<endl;
    }
}
