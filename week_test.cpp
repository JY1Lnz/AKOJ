#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005];

typedef struct a
{
    int x;
};
void aa(struct a data)
{
    data.x = 2;
}

int main()
{
    char s[1000];
    while(cin>>s)
    {
        for (int i = 0;i<strlen(s);i++)
            if (s[i]<='z'&&s[i]>='a')
                s[i] = s[i]-32;
        for (int i = 0;i<strlen(s);i++)
            cout<<s[i];
        cout<<endl;
    }


    return 0;
}
