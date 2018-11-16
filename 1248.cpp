#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n;
    vector<string> data;
    while(n--)
    {
        cin>>s;
        data.push_back(s);
    }
    map<string,int> map_data;
    for (auto s:data)
        //cout<<s<<endl;
        map_data[s] = 0;

    for (auto s:data)
        map_data[s]++;

    auto x = map_data.begin();

    int max_value = 0;
    for (x = map_data.begin();x != map_data.end();x++)
        //cout<<x->first<<x->second<<endl;
        if (x->second > max_value)
            max_value = x->second;
    //cout<<max_value<<endl;
    for (x = map_data.begin();x != map_data.end();x++)
        if (x->second == max_value)
        {
            cout<<x->first<<endl;
            break;
        }


    return 0;
}
