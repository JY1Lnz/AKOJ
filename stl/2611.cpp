#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data;
    int a;
    while(cin>>a)
        data.push_back(a);
    sort(data.begin(),data.end());
    vector<int>::iterator it;
    it = data.begin();
    cout<<*it<<' ';
    it = data.end();
    it--;
    cout<<*it<<endl;

    return 0;
}
