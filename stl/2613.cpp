#include<bits/stdc++.h>
using namespace std;

void search_k(int n,int k,int &sum)
{
    if (n == k)
        sum++;
}
int main()
{
    int a,n;
    cin>>n;
    vector<int> data;
    while(n--&&cin>>a)
        data.push_back(a);
    //for(auto x:data)
        //cout<<x<<' ';
    int op;
    cin>>op;
    while(op--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        int sum = 0;
        vector<int> data_n(data.begin()+a,data.begin()+b);
        for (auto x:data_n)
            search_k(x,k,sum);
        cout<<sum<<endl;
    }


    return 0;
}
