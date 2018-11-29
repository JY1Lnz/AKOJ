#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    //freopen("test.in","r",stdin);
    set<int> data;
    int n,a,op,v;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&op,&v);
        if (op == 0)
        {
            data.insert(v);
            printf("%d\n",data.size());
        }
        else if (op == 1)
        {
            int flag = data.find(v) != data.end()?1:0;
            printf("%d\n",flag);
        }
        else if (op == 2)
        {
            data.erase(v);
        }
        else
        {
            scanf("%d",&a);
            auto l = data.lower_bound(v);
            auto r = data.upper_bound(a);
            for (;l != r;l++)
                printf("%d\n",*l);
        }
    }


    return 0;
}
