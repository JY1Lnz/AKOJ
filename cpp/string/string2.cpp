//cpp 16.4 str2.cpp --capacity() and reserve()

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string empty_s;
    string small = "bit";
    string larger = "Elephants are a girl's best friend";
    cout<<"Size"<<endl;
    cout<<"\tempty: "<<empty_s.size()<<endl;
    cout<<"\tsmall: "<<small.size()<<endl;
    cout<<"\tlarger: "<<larger.size()<<endl;
    cout<<"Capacities:"<<endl;
    cout<<"\tempty: "<<empty_s.capacity()<<endl;
    cout<<"\tsmall: "<<small.size()<<endl;
    cout<<"\tlarger: "<<larger.size()<<endl;
    empty_s.reserve(50);
    cout<< "Capacity after empty.reserve(50): "
        <<empty_s.capacity()<<endl;

    return 0;
}
