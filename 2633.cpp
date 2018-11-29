#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    freopen("test.in","r",stdin);
    map<string,int> data;
    int n,a,v,op;

    scanf("%d",&n);
    while(n--)
    {
        char key[100];
        char l[100],r[100];
        scanf("%d",&op);
        if (op == 0)
        {
            scanf("%s%d",key,&v);
            data[key] = v;
        }
        else if (op == 1)
        {
            scanf("%s",key);
            printf("%d\n",data[key]);
        }
        else if (op == 2)
        {
            scanf("%s",key);
            data[key] = 0;
        }
        else
        {
            scanf("%s%s",l,r);
            for (auto it = data.begin();it != data.end();it++)
                if (it->first>l&&it->first<r)
                {
                    cout<<it->first;
                    printf(" %d\n",it->second);
                    break;
                }
                    //printf("%s %d\n",it->first,it->second);
        }

    }
    //for (auto it = data.begin();it != data.end();it++)
            //printf("%s\n",it->first);


    return 0;
}
