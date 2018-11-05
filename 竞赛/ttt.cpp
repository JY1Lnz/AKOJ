#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    //n++;
    char v;
    v = getchar();
    while(n--)
    {
        string s;
        char x;
        getline(cin,s);
        int len = s.size();
        //for (int i = 0;s[i] != '\0';i++)
            //cout<<s[i];

        int l = 0;
        int f = 0;
        for (int i = 0;i<=s.size();i++)
        {

            if (s[i] != ' '&&s[i] != '\0')
                l++;
            if (s[i] == ' '||s[i] == '\0')
            {
                for (int j = l-1;j>=f;j--)
                    cout<<s[j];
                cout<<' ';
                f = i+1;
            l++;
            }

        }
        cout<<endl;
    }

    return 0;
}
