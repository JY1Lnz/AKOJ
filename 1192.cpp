#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int data[n];
        for (int i = 0;i<n;i++)
            cin>>data[i];
        int large = 1;
        int sum = 1;
        int w = 0;
        for (int i = 1;i<n;i++)
        {
            if (data[i] == data[i-1])
            {
                sum++;
                if (sum > large)
                    large = sum;
                continue;
            }
            if (data[i] != data[i-1])
                sum = 1;
        }
        cout<<large<<endl;
    }

    return 0;
}
