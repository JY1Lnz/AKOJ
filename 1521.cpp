#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m;
    while(cin>>n>>i>>m)
    {
        int data[m];
        for (int i = 0;i<m;i++)
            cin>>data[i];
        vector<int> people;
        for (int i = 1;i<=n;i++)
            people.push_back(i);
        i--;
        people.erase(people.begin()+i);
        for (int j = 0;j<m;j++)
        {
            i = (i+data[j]-1)%people.size();
            people.erase(people.begin()+i);
        }
        for (int i = 0;i<people.size();i++)
            cout<<people[i]<<' ';
        cout<<endl;
    }

    return 0;
}
