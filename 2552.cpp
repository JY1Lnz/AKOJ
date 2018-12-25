#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <memory.h>
#include <algorithm>
using namespace std;

struct Node
{
    string num;
    string year;
    string month;
    string day;
    Node(string s = "")
    {
        num = s;
        year.assign(s,6,4);
        month.assign(s,10,2);
        day.assign(s,12,2);
    }
    bool operator < (const Node & A)const
    {
        if (this->year != A.year)
            return this->year > A.year;
        else if (this->month != A.month)
            return this->month > A.month;
        else
            return this->day > A.day;
    }

};

int main()
{
    int n;
    string s;
    cin>>n;
    vector<Node> data;
    for (int i = 0;i<n;i++)
    {
        cin>>s;
        Node x(s);
        data.push_back(x);
    }

    sort(data.begin(),data.end());

    for (auto x:data)
    {
        cout<<x.num<<endl;
    }

    return 0;
}
