#include<iostream>
#include<memory.h>
#include<fstream>
#include<algorithm>
using namespace std;
typedef long long LL;
const int maxn = 100+10;

int main()
{
    int t,cnt = 0;
    cin>>t;
    while(t--)
    {
        LL l,r,a,b,x;
        cin>>l>>r>>a>>b;
        for (x = l;x<=r;x++)
            if (a%x == 0&&x%b == 0)
                break;
        printf("Case #%d: ",++cnt);
        if (x > r)
            cout<<-1<<endl;
        else
            cout<<x<<endl;
    }


    return 0;
}
