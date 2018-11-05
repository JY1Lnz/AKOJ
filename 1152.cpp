#include<bits/stdc++.h>
using namespace std;
//1 2 3 4  5  6  7  8  9
//1 3 6 10 15 21 28 36 45 此行为前几个的和
int main()
{
    long long sum = 0;
    vector<long long> data;
    for (int i = 1;i<=2000000;i++)
    {
        sum+=i;
        data.push_back(sum);
    }
    //vector<long long> ::iterator it;
    long long m;

    while(cin>>m)
    {
        for (int i = 0;i<m/4+2;i++)
        {
            long long a = data.at(i);
            long long mubiao = m+a;
            long pos = lower_bound(data.begin(),data.end(),mubiao)-data.begin();
            if (data.at(pos) - a == m)
                cout<<i+2<<' '<<pos+1<<endl;
        }
        cout<<endl;
    }


    return 0;
}
