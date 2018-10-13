#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,b1,a2,b2;
    while(scanf("%d%d%d%d",&a1,&b1,&a2,&b2) != EOF)
    {
        int number = 1;
        while(1)
        {
            if (((number - b1)%a1 == 0)&&((number - b2)%a2 == 0))
            {
                cout<<number<<endl;
                break;
            }
            number += 1;
        }
    }

    return 0;
}
