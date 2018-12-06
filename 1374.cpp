#include<bits/stdc++.h>
using namespace std;

struct len
{
    int l;
    int r;
};

bool cmp(len l,len r)
{
    if (l.l != l.r)
        return l.l<r.l;
    return l.r<r.r;
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

    vector<int> space = {0};
    for (int i = 0;i<n;i++)
    {
        int flag = 0;
        for (int j = 0;j<space.size();j++)
        {
            if (data[i].l >= space[j])
            {
                space[j] = data[i].r;
                flag = 1;
                break;
            }

        }
        if (flag == 0)
            space.push_back(data[i].r);
    }
    cout<<space.size()<<endl;

    return 0;
}
