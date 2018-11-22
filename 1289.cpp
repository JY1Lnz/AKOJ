#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data;
    int a;
    while(cin>>a)
        data.push_back(a);
    sort(data.begin(),data.end());
    int big,small;
    big = *(data.end()-1);
    small = *data.begin();
    double sum = 0;
    for (vector<int>::iterator it = data.begin();it != data.end();it++)
        sum += * it;
    //cout<<data.size()<<endl;

    sum = sum/data.size();
    //cout<<sum<<endl;
    printf("%d %d %.3f",small,big,sum);

    return 0;
}
