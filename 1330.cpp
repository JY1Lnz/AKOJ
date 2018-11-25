#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[5];
    while(cin>>data[0])
    {
        map<int,int> mp;
        mp[data[0]]++;
        int all = data[0];
        for (int i = 1;i<5;i++)
        {
            cin>>data[i];
            mp[data[i]]++;
            //cout<<mp[data[i]]<<endl;
            all += data[i];
        }
        //cout<<all<<endl;
        int small = all;
        map<int,int>::reverse_iterator it;
        //sort(mp.begin(),mp.end());
        for (it = mp.rbegin();it != mp.rend();it++)
        {
            //cout<<it->first<<' '<<it->second<<endl;
            if (it->second >= 3)
                small = min(small,all-3*(it->first));
            else if (it->second == 2)
                small = min(small,all-(it->second)*(it->first));
        }
        //cout<<it->first<<' '<<it->second;
        cout<<small<<endl;
    }

    return 0;
}
