#include<bits/stdc++.h>
using namespace std;

int main()
{
    string start;
    string content;
    while(cin>>start)
    {
        getchar();
        if (start == "ENDOFINPUT")
            break;
        getline(cin,content);
        for (int i = 0;i<content.length();i++)
            if (isalpha(content[i]))
                content[i] = (content[i]-'A'+21)%26+'A';
        cout<<content<<endl;
        cin>>start;
    }

}
