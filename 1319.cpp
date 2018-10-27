#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s[2][10000];
        cin>>s[0]>>s[1];
        //cout<<s[0]<<s[1];
        int book[2][26] = {0};
        int flag = 0;
        for (int i = 0;s[0][i] != '\0';i++)
            book[0][s[0][i]-97] = 1;
        for (int i = 0;s[1][i] != '\0';i++)
            book[1][s[1][i]-97] = 1;
        for (int i = 0;i < 26;i++)
            if (book[0][i] != book[1][i])
            {
                flag = 1;
                break;
            }
        if (flag == 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
