#include<bits/stdc++.h>
using namespace std;

int main()
{
    string data;
    while(cin>>data)
    {
        if (data == "END")
            break;
        for (int i = 0;data[i] != '\0';i++)
        {
            switch (data[i])
            {
                case 'A':
                case 'W':
                case 'F':
                    cout<<'I';
                    break;
                case 'C':
                    cout<<'L';
                    break;
                case 'M':
                    cout<<'o';
                    break;
                case 'S':
                    cout<<'v';
                    break;
                case 'D':
                case 'P':
                case 'G':
                case 'B':
                    cout<<'e';
                    break;
                case 'L':
                    cout<<'Y';
                    break;
                case 'X':
                    cout<<'u';
                    break;
                default:
                    cout<<data[i];
                    break;
            }
        }
        cout<<endl;
    }

    return 0;
}
