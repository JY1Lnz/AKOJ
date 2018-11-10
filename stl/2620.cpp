#include<bits/stdc++.h>
using namespace std;

struct Turple
{
    int value;
    int weight;
    char type;
    long long date;
    string name;
};

bool cmp(Turple a,Turple b)
{
    if (a.value > b.value)
        return false;
    else
        if (a.value == b.value)
            if (a.weight > b.weight)
                return false;
            else
                if (a.weight == b.weight)
                    if (a.type > b.type)
                        return false;
                else
                    if (a.type == b.type)
                        if (a.date > b.date)
                            return false;
                        else
                            if (a.date == b.date)
                                if (a.name > b.name)
                                    return false;
    return true;
}

void Show(Turple data)
{
    cout<<data.value<<' ';
    cout<<data.weight<<' ';
    cout<<data.type<<' ';
    cout<<data.date<<' ';
    cout<<data.name<<endl;
}
int main()
{
    vector<Turple> data;
    Turple test_data;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>test_data.value;
        cin>>test_data.weight;
        cin>>test_data.type;
        cin>>test_data.date;
        cin>>test_data.name;
        data.push_back(test_data);
    }
    sort(data.begin(),data.end(),cmp);
    for (auto x : data)
        Show(x);

    return 0;
}
