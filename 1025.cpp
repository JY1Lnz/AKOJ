#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double sum = 1;
    for (float i = 2.0;i<=n;i++)
    {
        sum += 1/(i*i);

    }
    sum *= 6;
    cout<<sqrt(sum)<<endl;

    return 0;
}
