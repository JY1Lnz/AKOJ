#include<bits/stdc++.h>
using namespace std;

const int MAX = 30;
bool edges[MAX][MAX];
char raw_data[1123];
int node_num, book_num[MAX];
int pos[MAX], ans[MAX], k;

void put()
{
    char result[112];

    for (int i = 0; i < MAX; i++)
    {
        if (ans[i] != -1)
            result[ans[i]] = 'A'+i;
    }

    for (int i = 0; i < node_num; i++)
        printf("%c ", result[i]);
    printf("-> %d\n", k);
}


void add_edge(int l, int r)
{
    int u = raw_data[l] - 'A';

    for (int i = l+2; i <= r; i++)
    {
        int v = raw_data[i] - 'A';
        edges[u][v] = 1;
        edges[v][u] = 1;
    }
}

void analysis()
{
    node_num = 0, k = 9999;
    memset(pos, -1, sizeof(pos));
    memset(edges, 0, sizeof(edges));
    memset(book_num, 0, sizeof(book_num));

    int len = strlen(raw_data);

    int head = 0;
    for (int i = 0; i < len; i++)
    {
        if (isalpha(raw_data[i]) && book_num[raw_data[i]-'A'] == 0)
        {
            book_num[raw_data[i]-'A'] = 1;
            node_num++;
        }
        if (i == len-1 || raw_data[i+1] == ';')
        {
            add_edge(head, i);
            head = i+2;
        }
    }
}

void solve(int cur, int cnt)
{
    if (cur == node_num)
    {
        if (cnt < k)
        {
            for (int i = 0 ; i < MAX; i++)
                ans[i] = pos[i];
            k = cnt;
            return;
        }
    }
    else
    {
        for (int i = 0; i < MAX; i++)
        {
            if (!book_num[i] || pos[i] != -1)
                continue;

            pos[i] = cur;

            int dis = 0, flag = 1;
            for (int j = 0; j < MAX; j++)
            {
                if (edges[i][j])
                {
                    if (pos[j] == -1)
                        dis++;
                    else if (cur - pos[j] >= k)
                    {
                        flag = 0;
                        break;
                    }
                    else
                        cnt = max(cnt, cur - pos[j]);
                }
            }

            if (dis >= k)
                flag = 0;

            if (flag)
                solve(cur+1, cnt);

            pos[i] = -1;
        }
    }
}



int main()
{
    while (cin >> raw_data && raw_data[0] != '#')
    {
        analysis();
        solve(0, 0);
        put();
    }
}

