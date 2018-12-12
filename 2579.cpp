#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    istringstream iss(s);
    string x;
    stack<double> data;
    while(iss>>x)
    {
        double m;
        if (x[0] != '+'&&x[0] != '-'&&x[0] != '*'&&x[0] != '/')
        {
            istringstream is(x);
            is>>m;
            data.push(m);
        }
        else
        {
            double a,b;
            b = data.top();
            data.pop();
            a = data.top();
            a = double(a);
            b = double(b);
            data.pop();
            if (x[0] == '+')
                m = a+b;
            else if (x[0] == '-')
                m = a-b;
            else if (x[0] == '*')
                m = a*b;
            else
                m = a/b;
            data.push(m);
        }
    }
    printf("%.2f\n",data.top());

    return 0;
}
