#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int sum = 0;
    while(cin>>s)
    {
        int x = 0;
        int flag = 0;
        for (int i = 0;i<11;i++)
            if (s[i] == '6'||s[i] == '8')
                x++;
            else if (s[i] == '4')
            {
                flag = 1;
                break;
            }
            else
                ;
        if (flag == 1)
            continue;
        if (x>=5)
        {
            cout<<s<<endl;
            sum++;
        }
    }
    cout<<sum<<endl;

    return 0;
}
