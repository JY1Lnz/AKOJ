#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string need,str,word;
    while(getline(cin,need))
    {
        int flag = 0;
        getline(cin,str);
        istringstream  iss(str);
        while(iss>>word)
        {
            if (count(word.begin(),word.end(),need[0]) != 0)
                cout<<word<<endl,flag = 1;

        }
        if (!flag)
            cout<<"No!\n";
        cout<<endl;
    }

    return 0;
}
