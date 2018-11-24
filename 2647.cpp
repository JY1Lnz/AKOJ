#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ifstream cin("test.in");
    int n;
    cin>>n;
    int data[n];
    for (int i = 0;i<n;i++)
        cin>>data[i];
    int key;
    for (int i = 0;i<n;i++)
    {
        key = data[i];
        //cout<<key<<' ';
        int j = i-1;
        for (;j>=0;j--)
        {
            if (key < data[j])
                data[j+1] = data[j];
            else
            {
                break;
            }

        }
        data[j+1] = key;
        for (int x = 0;x<n;x++)
            cout<<data[x]<<' ';
        cout<<endl;
    }
}
