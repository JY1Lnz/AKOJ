#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int w = 0;
        while(n != 1)
        {
            w++;
            if (n%2 != 0)
                n = 3*n+1;
            else
                n = n/2;
        }
        cout<<w<<endl;
    }

    return 0;
}
