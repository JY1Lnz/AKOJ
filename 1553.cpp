#include<bits/stdc++.h>
using namespace std;

int main()
{
    int money,bag;
    cin>>money>>bag;
    double real_money = 0;
    double data[bag];
    int flag = 1;
    for (int i = 0;i<bag;i++)
    {
        cin>>data[i];
        real_money += data[i];
        if (data[i] <0.01)
            flag = 0;

    }
    int flag_same = 1;
    for (int i = 0;i<bag;i++)
        if (count(data,data+bag,data[i]) != 1)
            flag_same = 0;

    if (flag == 0||real_money != money)
        cout<<"Wrong Answer~\n";
    else if (flag_same == 0)
        cout<<"Not Very Good~\n";
    else
        cout<<"Wonderful~\n";


    return 0;
}
