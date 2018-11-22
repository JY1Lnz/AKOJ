#include<bits/stdc++.h>
using namespace std;

bool su(int n)
{
    for (int i = 2;i*i<=n;i++)
        if (n%i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int> data;
    for (int i = 2;i<=n;i++)
        if (su(i))
            data.push_back(i);
    int sum = 0;
    for (int i = 0;i<data.size()-1;i++)
        if ((data[i+1]-data[i]) <= 2)
            sum++;
    //for (auto x:data)
        //cout<<x<<endl;
    cout<<sum<<endl;
}
