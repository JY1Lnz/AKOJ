#include<bits/stdc++.h>
using namespace std;
int main()
{
    //ifstream cin ("test.in");
    vector<int> A;
    vector<int> B;
    int n,m,a;
    cin>>n;
    while(n--&&cin>>a)
        A.push_back(a);
    cin>>m;
    while(m--&&cin>>a)
        B.push_back(a);
    int flag = 1;
    for (int i = 0;i<B.size();i++)
    {
        if (!flag)
            break;
        for (int j = 0;j<A.size();j++)
        {
            if (!flag)
                break;
            if ( (find(A.begin(),A.end(),B[i])-A.begin()) == A.size())
                flag = 0;
        }
    }
    if (flag)
        cout<<1<<endl;
    else
        cout<<0<<endl;

    return 0;
}
