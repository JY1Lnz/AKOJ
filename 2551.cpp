#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <memory.h>
#include <algorithm>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    if (a.length() != b.length())
        cout<<1<<endl;
    else if (a == b)
        cout<<2<<endl;
    else
    {
        for (int i = 0;i<a.length();i++)
        {
            a[i] = tolower(a[i]);
            b[i] = tolower(b[i]);
        }
        if (a == b)
            cout<<3<<endl;
        else
        {
            string c = b;
            reverse(c.begin(),c.end());
            if (c == a)
                cout<<4<<endl;
            else
                cout<<5<<endl;
        }
    }

    return 0;
}
