#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,n;
    while(cin>>l>>n)
    {
        int data[n];
        for (int i = 0;i<n;i++)
            cin>>data[i];
        int mint = 0;
        int maxt = 0;
        for (int i = 0;i<n;i++)
            mint = max(mint,min(data[i],l-data[i]));
        for (int i = 0;i<n;i++)
            maxt = max(maxt,max(data[i],l-data[i]));
        cout<<mint<<' '<<maxt<<endl;
    }

    return 0;
}
