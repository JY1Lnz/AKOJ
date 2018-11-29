#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x;
    vector<int> a;
    vector<int> b;
    cin>>n;
    while(n--&&cin>>x)
        a.push_back(x);
    cin>>m;
    while(m--&&cin>>x)
        b.push_back(x);
    printf("%d\n",a<b?1:0);


    return 0;
}
/*
3
1 2 3
2
2 4
*/
