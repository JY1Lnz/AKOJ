#include<bits/stdc++.h>
using namespace std;

int cmp(int a,int b)
{
    return a>b;
}

int main()
{
    string s;
    while(cin>>s)
    {
    int flag[10] = {0};
    for (int i = 0;i<10;i++)
        flag[s[i]-'0'] = 1;
    vector<int> data;
    map<int,int> ad;
    for (int i = 0;i<10;i++)
        if (flag[i] == 1)
            data.push_back(i);

    sort(data.begin(),data.end(),cmp);
    cout<<"int[] arr = new int[]{"<<data[0];

    for (auto it = data.begin()+1;it != data.end();it++)
        cout<<','<<*it;

    cout<<"};\n";
    for (int i = 0;i<data.size();i++)
        ad[data[i]] = i;

    cout<<"int[] index = new int[]{"<<ad[s[0]-'0'];
    for (int i = 1;i<s.length();i++)
        cout<<','<<ad[s[i]-'0'];
    cout<<"};\n";
    }

    return 0;
}
