#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<string> data[3];
    for (int i = 0;i<10;i++)
    {
        data[0].push_front("0");
        data[1].push_front("0");
        data[2].push_front("0");
    }
    long long op;
    string num;
    while(cin>>op)
    {
        cin>>num;
        data[op].push_front(num);
    }
    for (int i = 0;i<10;i++)
    {
        cout<<data[0].at(i)<<' ';
        cout<<data[1].at(i)<<' ';
        cout<<data[2].at(i)<<' '<<endl;
    }

    return 0;
}
/*
2 18270477699
1 10149800116
0 19906559817
1 16209018105
1 16804212234
2 19289130583
1 17982711123
0 10897630486
1 11860787674
0 15192777554
d:\programming\°²¿ÆOJ\1164.cpp|10|error: no matching function for call to 'std::deque<std::__cxx11::basic_string<char> >::push_front(char&)'|
*/
