#include<bits/stdc++.h>
using namespace std;
//�ݹ���
int f(int n)
{
    if (n == 0)
        return 1;
    return f(n-1)+2*n-2;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<f(n)<<endl;
    }

    return 0;
}
