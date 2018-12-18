#include<bits/stdc++.h>
using namespace std;

char data[10010];
//开头允许用0补充
int main()
{
    int flag = 0;
    while(cin>>data)
    {
        int n;
        for (int i = 0;i<strlen(data);i++)
        {
            sscanf(&data[i],"%1X",&n);
            stack<int> scale;
            while(n>0)
            {
                scale.push(n%2);
                n/=2;
            }
            if (scale.size() < 4)
                for (int i = 0;i<4-scale.size();i++)
                    cout<<0;
            while(!scale.empty())
            {
                cout<<scale.top();
                scale.pop();
            }
            flag = 1;
            //cout<<endl;
        }
        cout<<endl;

        memset(data,0,sizeof(data));
    }


    return 0;
}

