#include<bits/stdc++.h>
using namespace std;

void mp(map<char,int> test)
{
    for (auto it = test.begin();it != test.end();it++)
        cout<<it->first<<' '<<it->second<<endl;
}

int main()
{
    ifstream cin ("test.in");
    string dota,lol;
    string a = "dotaer";
    string b = "loler";
    while(cin>>dota>>lol)
    {
        map<char,int> dotaer;
        map<char,int> loler;
        for (int i = 0;i<a.length();i++)
        {
            dotaer[a[i]] = 0;
        }
        for (int i = 0;i<b.length();i++)
        {
            loler[b[i]] = 0;
        }
        //mp(dotaer);
        //mp(loler);
        for (int i = 0;i<dota.length();i++)
        {
            if (isupper(dota[i]))
                dota[i] = tolower(dota[i]);
            dotaer[dota[i]]++;
        }
        for (int i = 0;i<lol.length();i++)
        {
            if (isupper(lol[i]))
                lol[i] = tolower(lol[i]);
            loler[lol[i]]++;
        }

        int dotaer_number = 9999,loler_number = 9999;
        //mp(dotaer);
        //mp(loler);

        for (auto it = dotaer.begin();it != dotaer.end();it++)
            dotaer_number = min(dotaer_number,it->second);
        for (auto it = loler.begin();it != loler.end();it++)
            if (it -> first == 'l')
                loler_number = min(loler_number,it->second/2);
            else
                loler_number = min(loler_number,it->second/2);

        cout<<"Dotaer: "<<dotaer_number<<endl;
        cout<<"Loler: "<<loler_number<<endl;
        if (loler_number>dotaer_number*3)
            cout<<"Loler Win\n";
        else
            cout<<"Dotaer win\n";
    }

    return 0;
}
