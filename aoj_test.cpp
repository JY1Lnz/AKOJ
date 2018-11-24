#include<bits/stdc++.h>
using namespace std;

unsigned long long jie(int n,int e)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (n == e)
        return e;
    return n*jie(n-1,e);
}



struct vote
{
    int x;
    int y;
};

int cmp(struct vote a,struct vote b)
{
    if (a.x > b.x)
        return true;
    else if (a.x == b.x)
    {
        if (a.y > b.y)
            return true;
    }
    return false;
}

int main()
{
    struct vote tmp = {1,2};
    struct vote tmp1 = {1,2};
    cout<<tmp == tmp1<<endl;

    return 0;
}
