#include<bits/stdc++.h>
using namespace std;

struct len
{
    int l;
    int r;
};

bool cmp(len l,len r)
{
    if (l.r != r.r)
        return l.r<r.r;
    return l.l>r.l;
}

int main()
{
    int n;
    cin>>n;
    vector<len> data;
    len tmp;
    for (int i = 0;i<n;i++)
    {
        cin>>tmp.l>>tmp.r;
        data.push_back(tmp);
    }
    sort(data.begin(),data.end(),cmp);

    for (int i = n-1;i>0;i--)
        if (data[i-1].l >= data[i].l)
            data.erase(data.begin()+i);
    int num = 0;
    int mark = data[0].l;
    for (int i = n-2;i>=0;i--)
    {
        if (data[i].r >= mark)
            num++;
        else if (data[i].r < mark)
            mark = data[i].l;
    }
    cout<<num<<endl;

    return 0;
}
