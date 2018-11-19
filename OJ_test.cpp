#include<bits/stdc++.h>
using namespace std;

int bei(int n)
{
    if (n == 1)
        return 1;
    return 10*bei(n-1);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int flag = 0;//0-rxcy;1-aa11;
        for (int i = 0;i<s.length();i++)
        {
            if (isdigit(s[i]))
                flag = 1;
            if (flag == 1&&isalpha(s[i]))
            {
                flag = 0;
                break;
            }
        }
        //cout<<flag<<endl;
        //judge stytle
        if (flag == 0)
        {
            s.erase(s.begin());
            int w = find(s.begin(),s.end(),'C')-s.begin();
            string hang(s,0,w);
            string lie(s,w+1,s.length());
            int lie_v = 0;
            //int w = 1;
            while(lie.size()>0)
            {
                lie_v += (*lie.begin()-48)*bei(lie.size());
                lie.erase(lie.begin());
            }
            //cout<<lie_v<<endl;
            string lie_e;
            if (lie_v>=456976)
            {
                lie_e += char((lie_v/456976)+64);
                lie_v %= 456976;
            }
            if (lie_v >= 17576)
            {
                lie_e += char((lie_v/17576)+64);
                lie_v %= 17576;
            }
            if (lie_v >= 676)
            {
                lie_e += char((lie_v/676)+64);
                lie_v %= 676;
            }
            if (lie_v >= 26)
            {
                lie_e += char((lie_v/26)+64);
                lie_v %= 26;
            }
            if (lie_v > 0)
                lie_e += char(lie_v+64);
            cout<<lie_e<<hang<<endl;
        }


        else
        {
            int w = 0;
            for (int i = 0;i<s.length();i++)
            {
                if (isdigit(s[i]))
                    break;
                w++;
            }
            //cout<<w<<endl;
            string lie(s,0,w);
            string hang(s,w,s.length());
            int sum = 0;
            //cout<<s.length()<<endl;
            while(lie.length()>0)
            {
                if (lie.length() == 5)
                    sum += int(*s.begin()-64)*45697;
                if (lie.length() == 4)
                    sum += int(*s.begin()-64)*17576;
                if (lie.length() == 3)
                    sum += int(*s.begin()-64)*676;
                if (lie.length() == 2)
                    sum += int(*s.begin()-64)*26;
                if (lie.length() == 1)
                    sum += int(*s.begin()-64)*1;
                lie.erase(lie.begin());
            }
            cout<<'R'<<hang<<'C'<<sum<<endl;
        }

    }

    return 0;
}
