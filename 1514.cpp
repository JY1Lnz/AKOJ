#include<bits/stdc++.h>
using namespace std;

struct all{
    char name;
    int fans = 0;
    int like = 0;
};
int main()
{
    int p;
    while(cin>>p)
    {
        int op;
        struct all data[p];
        for (int i = 0;i<p;i++)
            cin>>data[i].name;
        cin>>op;
        char x = getchar();
        while(op--)
        {
            char fans,ta;
            scanf("%c @ %c",&fans,&ta);
            char x = getchar();
            if (fans == ta)
                continue;
            for (int i = 0;i<p;i++)
            {
                if (data[i].name == ta)
                    data[i].fans++;
                if (data[i].name == fans)
                    data[i].like++;
            }
        }
        for (int i = 0;i<p;i++)
            cout<<data[i].name<<' '<<data[i].fans<<' '<<data[i].like<<endl;
        cout<<endl;
    }

    return 0;
}
