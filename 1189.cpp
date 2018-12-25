#include<bits/stdc++.h>
using namespace std;

map<char,int> data;

void Input_declare()
{
    string s;
    while(getline(cin,s))
    {
        if (s == "%%%")
            return;
        istringstream iss(s);
        char op,ot;
        int n;
        iss>>op;
        iss>>ot;
        iss>>n;
        data[op] = n;
    }
}

void Input_operator()
{

    string s;
    while(getline(cin,s))
    {
        istringstream iss(s);
        int sum;
        char op,va;
        iss>>va;
        sum = data[va];
        while(iss>>op)
        {
            iss>>va;
            if (op == '+')
                sum = sum + data[va];
            else if (op == '-')
                sum = sum - data[va];
            else
                sum = sum * data[va];
        }
        cout<<sum<<endl;
    }
}

int main()
{
    Input_declare();
    Input_operator();

    return 0;
}

