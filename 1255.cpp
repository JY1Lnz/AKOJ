#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int l = 1;
        while(l<=s.length())
        {
            int flag = 1;
            string s_p(s,0,l);
            for (int i = 0;i<=s.length()-l;i += l)
            {
                string test(s,i,l);
                if (s_p != test)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                cout<<l<<endl;
                break;
            }
            l++;
        }
    }

    return 0;
}
