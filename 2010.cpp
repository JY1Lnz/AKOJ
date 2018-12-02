#include<bits/stdc++.h>
using namespace std;

int bone[1010];
int state[1010];
int head[1010];
int book[1010];
int gethead(int n)
{
    if (head[n] == n)
        return n;
    else
    {
        head[n] = gethead(head[n]);
        return head[n];
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(state,0,sizeof(state));
        memset(head,0,sizeof(head));
        memset(book,0,sizeof(book));
        int n,m;
        cin>>n>>m;
        for (int i = 1;i<=n;i++)
            head[i] = i;
        int l,r;
        int sum = 0;
        for (int i = 1;i<=m;i++)
        {
            cin>>l>>r;
            int hl = gethead(l);
            int hr = gethead(r);
            if (book[l] == 0&&book[r] == 0)
            {
                book[l] = 1;
                book[r] = 1;
                head[hr] = hl;
                state[l] = 1;
                state[r] = 0;
            }
            else if (book[l]&&book[r])
            {
                if (hl == hr)
                {
                    if (state[l] == state[r])
                        sum++;
                }
                else if (h1 != hr)
                {

                }
            }
        }
    }

    return 0;
}
