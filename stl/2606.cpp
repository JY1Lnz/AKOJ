#include<bits/stdc++.h>
using namespace std;

int main()
{
    int zu,times;
    cin>>zu>>times;
    vector<int> data[zu];//�����ά��������
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
            if (data[wei].size() == 0)//�������Ϊ�� �������
            {
                cout<<endl;
                continue;
            }

            for (vector<int>::iterator it = data[wei].begin();it != data[wei].end();it++)//�����������ֵ
                cout<<*it<<' ';
            cout<<endl;
        }
        else
        {
            int wei;
            cin>>wei;
            data[wei].clear();//�������
        }

    }

    return 0;
}
