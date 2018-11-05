#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    while(cin>>a>>b)
    {
        a /=100;
        b /=100;
        for (int i = 1;;i++)
            if(int(i* b)-int(i*a) >= 1)
            {
                cout<<i<<endl;
                break;
            }

    }

    return 0;
}
