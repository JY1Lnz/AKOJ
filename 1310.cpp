#include<bits/stdc++.h>
using namespace std;
//1310
int main()
{
    int n;
    cin>>n;
    for (int i = n-1,j = n+1;i>0;i--,j++)
    {
        if (sqrt(i)*sqrt(i) == i)
        {
            cout<<i<<endl;
            break;
        }
        if (sqrt(j)*sqrt(j) == j)
        {
            cout<<j<<endl;
            break;
        }
    }

	return 0;
}
