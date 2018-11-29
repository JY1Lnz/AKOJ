#include<iostream>
#include<set>
#include<map>

using namespace std;
int main()
{
    multimap<string,int> data
    {
        {"avc",2},
        {"avc",4}
    };
    data.insert(pair<string,int>("cbc",1));
    for (auto x = data.begin();x != data.end();x++)
        cout<<x->first<<' '<<x->second<<endl;
    auto range = data.equal_range("av");
    for (auto it = range.first;it != range.second;it++)
        cout<<it->first<<' '<<it->second<<endl;
}
