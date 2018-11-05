#include<bits/stdc++.h>
using namespace std;
//大数取余 模拟手算
int main()
{
    string s;
    int n;
    while(cin>>s>>n)
    {
        int m = (s[0]-'0')%n;
        for (int i = 1;s[i] != '\0';i++)
        {
            m = (m*10+(s[i]-'0'))%n;

        }
        cout<<m<<endl;
    }

    return 0;
}
