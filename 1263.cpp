#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    while(cin>>a)
    {
        vector<int> data;
        while(a>0)
        {
            data.push_back(a%2);
            a /= 2;
        }
        int len = data.size()-1;
        //cout<<len<<endl;
        long long sum = 0;
        vector<int>::iterator it = data.begin();
        for (;it != data.end();it++)
            sum += *it * pow(2,len--);
        cout<<sum<<endl;
    }

    return 0;
}
