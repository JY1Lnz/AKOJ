#include<bits/stdc++.h>
using namespace std;

int sum = 0;
int n;

void hanno(int n,char x,char y,char z)
{
    if (n == 1)
    {
        sum++;
        printf("%2d. Move disk %d from %c to %c\n",sum,n,x,z);
    }
    else
    {
        hanno(n-1,x,z,y);
        sum++;
        printf("%2d. Move disk %d from %c to %c\n",sum,n,x,z);
        hanno(n-1,y,x,z);
    }
}

int main()
{
    while(cin>>n)
    {
        sum = 0;
        hanno(n,'X','Y','Z');
        cout<<endl;
    }

    return 0;
}

