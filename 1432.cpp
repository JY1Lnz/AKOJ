#include<bits/stdc++.h>
using namespace std;
const int maxn = 10000+10;
/*
���ȶ���ʵ����������
vector����ÿ�������һ����
���ȶ���ʵ�����ֵ����
��һ��������Ϊ0ʱ
�˵����������������ȶ���
������ӣ�https://blog.csdn.net/fjinhao/article/details/52662554
*/
vector<int> G[maxn];
int du[maxn],n,m,topo[maxn];

bool toposort()
{

    for (int i = 1;i<=n;i++)
        for (int j = 0;j<G[i].size();j++)
            du[G[i][j]]++;
    int tot = 0;

    priority_queue<int> q;
    for (int i = 1;i<=n;i++)
        if (!du[i])
            q.push(i);
    while(!q.empty())
    {
        int x = q.top();
        q.pop();
        topo[tot++] = x;
        for (int j = 0;j<G[x].size();j++)
        {
            int t = G[x][j];
            du[t]--;
            if (!du[t])
                q.push(t);
        }
    }
    if (tot == n)
        return true;
    else
        return false;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>n>>m;
        memset(du,0,sizeof(du));
        for (int i = 0;i<=n;i++)
            G[i].clear();

        for (int i = 0;i<m;i++)
        {
            cin>>l>>r;
            G[l].push_back(r);
        }

        if (toposort())
            for (int i = 0;i<n;i++)
                cout<<topo[i]<<' ';
        else
            cout<<-1;
        cout<<endl;

    }

    return 0;
}
