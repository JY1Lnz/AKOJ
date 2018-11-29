#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    set<int> data;
    //set<int> panding;
    int n,a,op,v;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&op,&v);
        if (op == 0)
        {
            data.insert(v);
            //panding.insert(v);
            printf("%d\n",data.size());
        }
        else
        {
            if (data.find(v) != data.end())
                printf("%d\n",1);
            else
                printf("%d\n",0);
        }
    }


    return 0;
}
