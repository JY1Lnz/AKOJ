#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    int data[10];
    for (int i = 0;i<10;i++)
        scanf("%d",&data[i]);
    int f1 = data[0];
    int f2 = data[1];
    int flag = (f1&1);
    if ((f2&1) != flag)
    {
        if ((f2&1) == (data[2]&1))
            cout<<f1<<endl;
        else
            cout<<f2<<endl;
        return 0;
    }
    for (int i = 2;i<10;i++)
        if ((data[i]&1) != flag)
            cout<<data[i]<<endl;

    return 0;
}
