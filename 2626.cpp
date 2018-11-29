#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    int n,a;
    cin>>n;
    vector<int> data;
    vector<int> other;
    while(n--&&cin>>a)
        data.push_back(a);
    cin>>n;
    while(n--&&cin>>a)
        other.push_back(a);
    for (int i = 0;i<other.size();i++)
    {
        int l = lower_bound(data.begin(),data.end(),other[i])-data.begin();
        int r = upper_bound(data.begin(),data.end(),other[i])-data.begin();
        cout<<l<<' '<<r<<endl;
    }


    return 0;
}