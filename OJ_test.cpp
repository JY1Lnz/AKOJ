#include<bits/stdc++.h>
using namespace std;

int bei(int n)
{
    if (n == 1)
        return 1;
    return 10*bei(n-1);
}

int main()
{
    int n;
    cin>>n;
    int data[11];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    int k = -1,x;
    cin>>x;
    for (int i = 0;i<n;i++)
        if (data[i] == x)
        {
            k = i;
            break;
        }
    if (k != -1)
        cout<<k<<endl;
    else
        cout<<"Not found"<<endl;

    return 0;
}
