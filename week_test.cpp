#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005];

typedef struct a
{
    int x;
};
void aa(struct a data)
{
    data.x = 2;
}

int main() {
    struct a data;
    data.x = 1;
    cout<<data.x<<endl;

    return 0;
}
