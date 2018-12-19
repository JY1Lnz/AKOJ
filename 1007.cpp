#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,w;
    cin>>l>>r>>w;
    char data[w+2];
    cin>>data;
    int n = 5;
    data[w] = 'a'+r;
    l--,r--;
    while(n--)
    {
        for (int i = w-1;i>=0;i--)
        {
            if (data[i]+1 < data[i+1])
            {
                data[i]++;
                for (int j = i+1;j<w;j++)
                    data[j] = data[j-1]+1;
                for (int m = 0;m<w;m++)
                    cout<<data[m];
                cout<<endl;
                break;
            }
        }
    }

    return 0;
}
