#include<iostream>
using namespace std;

int n;

void hanno(int n,char a,char b,char c)
{
    if (n == 1)
        printf("%d %c %c\n",n,a,c);
    else
    {
        hanno(n-1,a,c,b);
        printf("%d %c %c\n",n,a,c);
        hanno(n-1,b,a,c);
    }
}

int main()
{
    cin>>n;
    hanno(n,'A','C','B');

    return 0;
}
