
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    int n;
    cin>>n;
    int a;
    vector<int> data;
    while(n--&&cin>>a)
        data.push_back(a);
    int x;
    cin>>x;
    vector<int> other;
    while(x--&&cin>>a)
        other.push_back(a);
    for (int i = 0;i<other.size();i++)
    {
        int a = find(data.begin(),data.end(),other[i])-data.begin();
        if (a<data.size())
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }

    return 0;
}
