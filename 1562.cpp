#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[100],b[100];
    while(scanf("%s",a) != EOF)
    {
        getchar();
        gets(b);
        //cout<<b<<endl;
        int na = 0,nb = 0;
        int flaga = 1,flagb = 1;
        for (int i = 0;i<strlen(a);i++)
            if (isdigit(a[i]))
                na = na*10+(a[i]-'0');
            else
            {

                flaga = 0;
                break;
            }
            for (int i = 0;i<strlen(b);i++)
            if (isdigit(b[i]))
                nb = nb*10+(b[i]-'0');
            else
            {

                flagb = 0;
                break;
            }
        if (a[0] == '0')
            flaga = 0;
        if (b[0] == '0')
            flagb = 0;
        flaga?cout<<na:cout<<'?';
        cout<<" + ";
        flagb?cout<<nb:cout<<'?';
        cout<<" = ";
        flaga&&flagb?cout<<na+nb:cout<<'?';
        cout<<endl;
    }

    return 0;
}
