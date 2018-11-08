#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);
    for (auto x : data)
        cout<<x<<endl;
    vector<int>::iterator it = data.begin();
    cout<<*(it+1)<<endl;

    return 0;
}
