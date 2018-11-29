#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v1,v2,t,s,l;
    while(cin>>v1>>v2>>t>>s>>l)
    {
    int d1=0,d2=0;
    int time=0;
    while(d1<l&&d2<l)
    {
        time++;
        d1+=v1;
        d2+=v2;
        if(d1>=l||d2>=l)
            break;
        if(d1-d2>=t)
        {
            d2+=v2*s;
            time=time+s;
        }
    }
    if(d2>d1)
        printf("T\n");
    if(d2<d1)
        printf("R\n");
    if(d1==d2)
        printf("D\n");
    printf("%d\n",time);
    }
    return 0;
}
