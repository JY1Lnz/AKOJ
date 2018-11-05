#include<bits/stdc++.h>
using namespace std;
int main()
{
    float data[7];
    string name;
    while(cin>>data[0])
    {
        float sum = 0,average = 0;
        for (int i = 1;i<7;i++)
            cin>>data[i];
        cin>>name;
        sort(data,data+7);
        for(int i = 1;i<6;i++)
            sum += data[i];
        average = sum/5.0;
        cout<<name<<' ';
        printf("%.2f\n",average);
    }

    return 0;
}
