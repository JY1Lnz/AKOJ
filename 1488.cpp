#include<iostream>
#include<vector>
using namespace std;

const int maxn = 100+10;
int map[maxn][maxn];
vector<pair<int,int> > data;
const int around[8][2] = {{-1,0},{-1,1},
    {0,1},{1,1},{1,0},{1,-1},{0,-1},{-1,-1}};

int main()
{
    int n,m,k;
    int x,y;
    cin>>n>>m>>k;
    for (int i = 0;i<k;i++)
    {
        cin>>x>>y;
        data.push_back(make_pair(x,y));
        map[x][y] = 1;
    }
    int flag = 0;
    for (int i = 0;i<data.size();i++)
    {
        for (int j = 0;j<8;j++)
        {
            int tx = data[i].first+around[j][0];
            int ty = data[i].second+around[j][1];
            if (map[tx][ty] == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }
    if (flag == 0)
        cout<<"NO\n";
    else
        cout<<"YES\n";

    return 0;
}
