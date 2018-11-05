#include<bits/stdc++.h>
using namespace std;

int main()
{

    string a;
    while(cin>>a)
    {
        stack<int> data;
        string tmp;
        int len = a.size();
        int yushu,zhi,n_c;
        while(1)
        {
            string b;
            if (a[0] == '1'&&a.size() == 1)
            {
            data.push(1);
            break;
            }
        zhi = a[0] - 48;
        n_c = zhi/2;
        yushu = zhi%2;
        tmp = n_c+48;
        if (tmp != "0")
            b.append(tmp);
        for (int i = 1;a[i] != '\0';i++)
        {
             zhi = a[i]-48;
             n_c = (yushu*10 + zhi)/2;
             yushu = (yushu*10 + zhi)%2;
             tmp = n_c+48;
             b.append(tmp);
        }
        data.push(yushu);
        a = b;
        }
        //data.pop();
        while(!data.empty())
        {
            cout<<data.top();
            data.pop();
        }
        cout<<endl;
    }

    return 0;
}
