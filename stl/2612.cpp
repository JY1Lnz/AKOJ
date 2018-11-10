#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    vector<int> data;
    while(n--&&cin>>a)
        data.push_back(a);
    int t;
    cin>>t;
    while(t--)
    {
        int op,a,b;
        cin>>op>>a>>b;
        if (op == 0)
        {
            vector<int>::iterator it = data.begin();
            vector<int> data_n(it+a,it+b);
            //for(auto x:data_n)
                //cout<<x<<' ';
            sort(data_n.begin(),data_n.end());
            cout<<*data_n.begin()<<endl;
        }
        else
        {
            vector<int>::iterator it = data.begin();
            vector<int> data_n(it+a,it+b);
            sort(data_n.begin(),data_n.end());
            cout<<*(data_n.end()-1)<<endl;
        }
    }


    return 0;
}
