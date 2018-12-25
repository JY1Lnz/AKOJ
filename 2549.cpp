#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <memory.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        string s;
        cin>>s;
        if (unique(s.begin(),s.end())-s.begin() == 1)
            cout<<"Y\n";
        else
            cout<<"N\n";
    }

    return 0;
}
