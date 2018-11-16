#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char m;
    m = getchar();
    while(n--)
    {
        string s;
        getline(cin,s);
        if (s[0] <='9'&&s[0]>='0')
        {
            cout<<"no"<<endl;
            continue;
        }
        int f = 1;
        for (auto c:s)
        {
            //cout<<c<<endl;
            int flag = 0;
            if ((c<='z'&&c>='a')||(c>='A'&&c<='Z')||(c == '_')||(c<='9'&&c>='0'))
                flag = 1;
            if (flag == 0)
            {
                cout<<"no"<<endl;
                f = 0;
                break;
            }
        }
        if (f == 1)
            cout<<"yes"<<endl;
    }

    return 0;
}
