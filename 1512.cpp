#include<bits/stdc++.h>
using namespace std;
struct hack{
    char name;
    int times = 0;
};
int main()
{
    char s[1000];
    while(cin>>s)
    {
        struct hack data[26];
        int len = strlen(s);
        for (int i = 0;i<len;i++)
        {
            if (s[i]<='z'&&s[i]>='a')
            {
                data[s[i]-97].name = s[i];
                data[s[i]-97].times++;
            }
            else
            {
                data[s[i]-65].name = s[i]+32;
                data[s[i]-65].times++;
            }
        }
        for (int i = 0;i<26;i++)
            for (int j = i+1;j<26;j++)
            {
                if (data[i].times < data[j].times)
                {
                    struct hack t = data[j];
                    data[j] = data[i];
                    data[i] = t;
                }
                if (data[i].times == data[j].times)
                    if (data[i].name > data[j].name)
                    {
                        struct hack t = data[j];
                        data[j] = data[i];
                        data[i] = t;
                    }
            }
        for (int i = 0;i<26;i++)
        {
            if (data[i].times == 0)
                break;
            cout<<data[i].name;
        }
        cout<<endl;
    }

    return 0;
}
