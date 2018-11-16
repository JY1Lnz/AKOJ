#include<bits/stdc++.h>
using namespace std;

void change(char &c)
{
    //字母转化为字符
    switch(c)
    {
        case 'A':
        case 'B':
        case 'C':
            c = '2';
            break;
        case 'D':
        case 'E':
        case 'F':
            c = '3';
            break;
        case 'G':
        case 'H':
        case 'I':
            c = '4';
            break;
        case 'J':
        case 'K':
        case 'L':
            c = '5';
            break;
        case 'M':
        case 'N':
        case 'O':
            c = '6';
            break;
        case 'P':
        case 'R':
        case 'S':
            c = '7';
            break;
        case 'T':
        case 'U':
        case 'V':
            c = '8';
            break;
        case 'W':
        case 'X':
        case 'Y':
            c = '9';
            break;
    }
}

void n_s_s(string &s,list<string> & s_n)
{
    //所有单词进入新队列
    string test;
    for (auto c:s)
    {
        //cout<<c<<endl;
        if(c <= 'Z'&&c>='A')
            change(c);
        //cout<<c<<endl;
        if (c <='9'&&c>='0')
            test += c;

    }
    s_n.push_back(test);
}

int main()
{
    int n;
    cin>>n;
    int l = n;
    int w = 0;
    list<string> s;
    list<string> s_new;
    string s_t;

    while(n--&&cin>>s_t)
        s.push_back(s_t);
    list<string>::iterator it = s.begin();
    list<string>::iterator it_n = s_new.begin();
    for (;it!=s.end();it++)
    {
        n_s_s(*it,s_new);
    }

    s_new.sort();

    map<string,int> data;


    for (auto &ss:s_new)
    {
        string s;
        int i = 0;
        for (auto c:ss)
        {
            if (i == 3)
                s+='-';
            s+=c;
            i++;
        }
        ss = s;
    }


    int flag = 0;
    for (auto ss:s_new)
        data[ss] = 0;
    for (auto ss:s_new)
        data[ss]++;
    s_new.unique();

    //for (auto c:s_new)
        //cout<<c<<endl;

    for (auto x = data.begin();x != data.end();x++)
        if (x->second > 1)
        {
            cout<<x->first<<' '<<x->second<<endl;
            flag = 1;
        }

    if (flag == 0)
        cout<<"No duplicates."<<endl;


    return 0;
}
