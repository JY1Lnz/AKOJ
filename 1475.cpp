#include<iostream>
#include<memory.h>
#include<fstream>
#include<algorithm>
#include<map>
using namespace std;
typedef long long LL;
const int maxn = 100+10;
int flag;
map<char,string> data;
map<char,int> zu;
void init()
{
    zu[','] = 1;
    zu['.'] = 1;
    zu['!'] = 1;
    zu['a'] = 2;
    zu['b'] = 2;
    zu['c'] = 2;
    zu['d'] = 3;
    zu['e'] = 3;
    zu['f'] = 3;
    zu['g'] = 4;
    zu['h'] = 4;
    zu['i'] = 4;
    zu['j'] = 5;
    zu['k'] = 5;
    zu['l'] = 5;
    zu['m'] = 6;
    zu['n'] = 6;
    zu['o'] = 6;
    zu['p'] = 7;
    zu['q'] = 7;
    zu['r'] = 7;
    zu['s'] = 7;
    zu['t'] = 8;
    zu['u'] = 8;
    zu['v'] = 8;
    zu['w'] = 9;
    zu['x'] = 9;
    zu['y'] = 9;
    zu['z'] = 9;
    zu[' '] = 10;
    zu['1'] = 11;
    zu['2'] = 11;
    zu['3'] = 11;
    zu['4'] = 11;
    zu['5'] = 11;
    zu['6'] = 11;
    zu['7'] = 11;
    zu['8'] = 11;
    zu['9'] = 11;
    zu['0'] = 11;
    data[','] = "1";
    data['.'] = "11";
    data['!'] = "111";
    data['a'] = "2";
    data['b'] = "22";
    data['c'] = "222";
    data['d'] = "3";
    data['e'] = "33";
    data['f'] = "333";
    data['g'] = "4";
    data['h'] = "44";
    data['i'] = "444";
    data['j'] = "5";
    data['k'] = "55";
    data['l'] = "555";
    data['m'] = "6";
    data['n'] = "66";
    data['0'] = "666";
    data['p'] = "7";
    data['q'] = "77";
    data['r'] = "777";
    data['s'] = "7777";
    data['t'] = "8";
    data['u'] = "88";
    data['v'] = "888";
    data['w'] = "9";
    data['x'] = "99";
    data['y'] = "999";
    data['z'] = "9999";
    data[' '] = "0";
}


void Output(char c)
{
    if (isdigit(c))
    {
        if (flag == 1)
        {
            cout<<"#";
            flag = 0;
        }
    }
    else
    {
        if (flag == 0)
        {
            cout<<"#";
            flag = 1;
        }
    }
}

int main()
{
    init();
    string s;
    while(getline(cin,s))
    {
        flag = 1;//1 Æ´Òô 0 Êý×Ö
        for (int i = 0;i<s.length();i++)
        {
            Output(s[i]);
            if (isdigit(s[i]))
                cout<<s[i];
            else
            {
                if (i != 0&&zu[s[i-1]] == zu[s[i]]&&!isdigit(s[i]))
                    cout<<"ok";
                cout<<data[s[i]];
            }
        }
        cout<<endl;

    }

    return 0;
}
