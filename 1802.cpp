#include<bits/stdc++.h>
using namespace std;
struct cont
{
    string name;
    string num;
    string sex;
};
int main()
{
    ifstream cin ("test.in");
    vector<cont> data;
    int n;
    cont tem;
    cin>>n;
    while(n--&&cin>>tem.name>>tem.num>>tem.sex)
        data.push_back(tem);
    cin>>n;
    string a,b;
    while(n--&&cin>>a>>b)
    {
        int flag = 1;
        for (int i = 0;i<data.size();i++)
        {
            if (data[i].name==a||data[i].name==b||data[i].num==b||data[i].num==a)
                if (data[i].sex == "M")
                    flag++;
                else
                    flag--;
        }
        if (flag == 1)
            cout<<'Y'<<endl;
        else
            cout<<'N'<<endl;
    }

    return 0;
}
