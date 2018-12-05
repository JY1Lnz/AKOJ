#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> data;
    string op;
    while(cin>>op)
    {
        int n;
        string name;
        if (op[0] == 'i')
        {
            cin>>n>>name;
            data.insert(data.begin()+n-1,name);
        }
        else if (op[0] == 'd')
        {
            cin>>name;
            data.erase(find(data.begin(),data.end(),name));
        }
        else if (op[1] == 'e')
        {
            cin>>name;
            cout<<(find(data.begin(),data.end(),name)-data.begin()+1)<<endl;
        }
        else
        {
            for (int i = 0;i<data.size();i++)
                cout<<data[i]<<' ';
            cout<<endl;
        }
    }

    return 0;
}
