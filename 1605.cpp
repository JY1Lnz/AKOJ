#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int len = s.length();
    int flag = 0;
    int cnt = 0;
    int em = len-1;
    int e;

    for (int i = 0;i<=len/2;i++)
    {
        e = em;
        for (;e>=i;e--)
        {
            if (s[i] == s[e])
                break;
        }
        if (e == i)
        {
            if (flag == 1||len%2 == 0)
            {
                cout<<"Impossible\n";
                return 0;
            }
            else
            {
                flag = 1;
                cnt += len/2 - i;
            }
            continue;
        }
        else
        {
            for (int j = e;j<em;j++)
            {
                swap(s[j],s[j+1]);
                cnt = cnt+1;
            }
        }
        em--;
    }
    cout<<cnt<<endl;

    return 0;
}
