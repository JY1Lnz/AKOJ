#include<iostream>
#include<algorithm>
#include<string>

struct birthday
{
    std::string name;
    int year;
    int month;
    int day;
};

void cin(birthday & data)
{
    std::cin>>data.name;
    std::cin>>data.year;
    std::cin>>data.month;
    std::cin>>data.day;
}

bool cmp(birthday & a,birthday & b)
{
    if (a.year < b.year)
        return true;
    else if (a.year == b.year)
        if (a.month < b.month)
            return true;
        else if (a.month == b.month)
            if (a.day < b.day)
                return true;
    return false;
}

int main()
{
    int n;
    std::cin>>n;
    birthday data[n];
    for (int i = 0;i<n;i++)
        cin(data[i]);
    std::sort(data,data+n,cmp);
    for (int i = 0;i<n;i++)
        std::cout<<data[i].name<<'\n';

    return 0;
}
