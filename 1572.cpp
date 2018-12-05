#include<bits/stdc++.h>
using namespace std;

struct vote
{
    int length;
    int width;
    int number;
};

bool cmp(vote a,vote b)
{
    if (a.length != b.length)
        return a.length>b.length;
    else if (a.width != b.width)
        return a.width<b.width;
    else
        return a.number>b.number;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vote tube[n];
        for (int i = 0;i<n;i++)
            cin>>tube[i].length>>tube[i].width>>tube[i].number;
        sort (tube,tube+n,cmp);
        cout<<tube[0].number<<endl;
    }

    return 0;
}
