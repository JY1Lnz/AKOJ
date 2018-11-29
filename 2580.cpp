#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ifstream cin ("test.in");
    int n;
    cin>>n;
    int x = n;
    vector<int> data;
    deque<int> first;
    int a;
    while(n--&&cin>>a)
        data.push_back(a);
    reverse(data.begin(),data.end());
    first.push_back(data.front());
    data.erase(data.begin());
    while(!data.empty())
    {
        first.push_front(data.front());
        data.erase(data.begin());
        if (data.empty())
            break;
        first.push_front(first.back());
        first.pop_back();
    }
    cout<<x<<endl;
    while(!first.empty())
    {
        cout<<first.front()<<' ';
        first.pop_front();
    }
    cout<<endl;

    return 0;
}
