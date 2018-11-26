#include<bits/stdc++.h>
using namespace std;


int main()
{
    //ifstream cin ("test.in");
    int n,target[1010];
    while(cin>>n)
    {
        int stack[1010],top = 0;
        int A = 1,B = 1;
        for (int i = 1;i<=n;i++)
            cin>>target[i];
        int ok = 1;
        while(B <= n)
        {
            if (A == target[B])
            {
                A++;
                B++;
            }
            else if (top && stack[top] == target[B])
            {
                top--;
                B++;
            }
            else if (A<=n)
                stack[++top] = A++;
            else
            {
                ok = 0;
                break;
            }

        }
        printf("%s\n",ok?"yes":"no");
    }


    return 0;
}
