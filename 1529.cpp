#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    while(cin>>s>>k)
    {
        int flag = 0;
            for (int i = 0;i<s.length()-1&&k;i++)
            {
                int j = i+1;
                int maxi = i;
                for (;j<=i+k&&j<=s.length()-1;j++)
                {
                    if (s[maxi] < s[j])
                        maxi = j;
                }
                char maxc = s[maxi];
                for (int x = maxi;x>i;x--)
                    s[x] = s[x-1],k--;
                s[i] = maxc;
            }
        cout<<s<<endl;
    }

    return 0;
}
