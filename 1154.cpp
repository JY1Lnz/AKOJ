#include<bits/stdc++.h>
using namespace std;

int main()
{
    char data[200];
    while(scanf("%s",data) != EOF)
    {
        int length = strlen(data);
        for(int i = 0;i < length;i++)
        {
            if (data[i] == '0')
                cout<<"1";
            if (data[i] == '1')
                cout<<"0";
        }
        cout<<endl;
    }

    return 0;
}
