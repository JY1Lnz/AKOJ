#include<bits/stdc++.h>
using namespace std;
//notebilityÌâ½â
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s,num;
        string now,maxn;
        int maxl = 1;
        cin>>s;
        cout<<s[0];
        maxn.assign(s,0,1);
        for (int i = 1;i<s.length();)
        {
            int flag = 0;
            while(1)
            {
                if (i+maxl > s.length())
                    maxl = s.length()-i;
                now.assign(s,i,maxl);
                if (now.length()>maxn.length()||now > maxn)
                {
                    flag = 1;
                    maxn = now;
                    break;
                }
                if ((i+maxl) >= s.length())
                    break;
                maxl++;
            }
            i += maxl;
            if (flag)
                cout<<','<<now;
            else
                cout<<now;
        }
        cout<<endl;
    }

    return 0;
}
/*
3
1215231
*/
