#include<bits/stdc++.h>
using namespace std;

int main()
{
    int times;
    cin>>times;
    while(times-- > 0)
    {
        char data[10];
        scanf("%s",&data);
        int length = strlen(data);
        for (int i = 0;i<length;i++)
        {
            if ((data[i] <= 'z')&&(data[i] >= 'a'))
                printf("%c",data[i] - 32);
            if ((data[i] <= 'Z')&&(data[i] >= 'A'))
                printf("%c",data[i] + 32);
        }
        cout<<endl;
    }

    return 0;
}
