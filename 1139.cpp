#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    while(n--)
    {
        int a;
        int sub;
        int flag = 1;
        int w = 0;
        int m;
        cin>>m;
        vector<int> data;
        vector<int>::iterator it,et;
        //et = data.begin();
        while(m--)
        {
            cin>>a;
            data.push_back(a);
        }
        sort(data.begin(),data.end());
        //sub = *(et+1)-*et;
        //cout<<sub<<endl;
        sub = data.at(1)-data.at(0);
        int big = data.size();
        for (;w<big-1;w++)
        {
            if (sub != data.at(w+1)-data.at(w))
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }

    return 0;
}
