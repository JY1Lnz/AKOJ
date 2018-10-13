#include<bits/stdc++.h>
using namespace std;
int main()
{
    int times;
    cin>>times;
    while(times-- > 0)
    {
        long long number;
        cin>>number;
        while(1)
        {
            if(number/10 == 0)
                break;
            number /= 10;
        }
        cout<<number<<endl;
    }

    return 0;
}
