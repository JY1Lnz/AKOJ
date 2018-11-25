#include<bits/stdc++.h>
using namespace std;

struct vote
{
    char c;
    int value;
};

int main()
{

    ifstream cin ("test.in");
    int n;
    cin>>n;
    vote que[n];
    for (int i = 0;i<n;i++)
        cin>>que[i].c>>que[i].value;
    vote bubble[n];
    vote select[n];
    for (int i = 0;i<n;i++)
    {
        bubble[i] = que[i];
        select[i] = que[i];
    }
    //bubble sort
    for (int i = 0;i<n;i++)
        for (int j = n-1;j>=i+1;j--)
            if (bubble[j].value < bubble[j-1].value)
            {
                swap(bubble[j].value,bubble[j-1].value);
                swap(bubble[j].c,bubble[j-1].c);
            }
    //selection sort
    for (int i = 0;i<n;i++)
    {
        int ad = i;
        for (int j = i;j<n;j++)
        {
            if (select[j].value<select[ad].value)
                ad = j;
        }
        swap(select[ad].c,select[i].c);
        swap(select[ad].value,select[i].value);
    }
    bool flag = true;
    for (int i = 0;i<n;i++)
    {
        cout<<bubble[i].c<<bubble[i].value<<' ';
        for (int j = 0;j<n;j++)
        {
            if (que[j].value == bubble[i])
        }
    }
    cout<<endl;
    for (int i = 0;i<n;i++)
        cout<<select[i].c<<select[i].value<<' ';
    cout<<endl;

    return 0;
}
