#include<bits/stdc++.h>
using namespace std;

struct len
{
    int l;
    int r;
    int leng;
};

bool cmp(len a,len b)
{
    if (a.r != b.r)
        return a.r<b.r;
    return a.l>b.l;
}

int main()
{
    int t;
    int l,r;
    vector<len> data;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        len tep = {l,r,r-l};
        data.push_back(tep);
    }
    sort(data.begin(),data.end(),cmp);

    for (int i = data.size()-1;i>0;i--)
    {
        //cout<<data[i-1].l<<' '<<data[i].l<<endl;
        if (data[i-1].l >= data[i].l)
            data.erase(data.begin()+i);
    }
    int sum = 0;
    int time = 0;
    for (int i = 0;i<data.size();i++)
    {
        if (data[i].l >= time)
        {
            sum++;
            time = data[i].r;
        }
    }
    cout<<sum<<endl;


    return 0;
}
/*
4
1 4
2 5
3 6
4 6
*/
