#include<bits/stdc++.h>
using namespace std;

int main()

{
    long long a;
    while(cin>>a)
    {
        long long sum = 0;
        while(a != 0)
        {
            if (a%2 == 1)
                sum++;
            a/=2;
        }
        if(sum%2 == 0)
            cout<<"even\n";
        else
            cout<<"odd\n";
    }

    return 0;
}
