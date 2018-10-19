#include<bits/stdc++.h>
using namespace std;

int main()
{
    int zu,times;
    cin>>zu>>times;
    vector<int> data[zu];//定义多维向量数组
    while(times--)
    {
        int operate;
        cin>>operate;
        if (operate == 0)
        {
            int wei,n;
            cin>>wei>>n;
            data[wei].push_back(n);

        }
        else if (operate == 1)
        {
            int wei;
            cin>>wei;
            if (data[wei].size() == 0)//如果数组为空 输出空行
            {
                cout<<endl;
                continue;
            }

            for (vector<int>::iterator it = data[wei].begin();it != data[wei].end();it++)//输出数组所有值
                cout<<*it<<' ';
            cout<<endl;
        }
        else
        {
            int wei;
            cin>>wei;
            data[wei].clear();//清除数组
        }

    }

    return 0;
}
