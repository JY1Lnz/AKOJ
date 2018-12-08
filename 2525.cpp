#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cnt = 0;
    cin>>t;
    while(t--)
    {
        int n;
        double money;
        cin>>n>>money;
        double sum = 0.0,I,N;
        for (int i = 0;i<n;i++)
        {
            cin>>I>>N;
            sum += I*N;
        }
        printf("Case %d: ",++cnt);
        if (sum > money)
        {
            cout<<-1<<endl;
            continue;
        }
        if (int(sum*100) % 10 > 0)
            sum = sum + 0.1;
        sum = int(sum*10);
        sum = sum/10;
        printf("%.2f\n",money-sum);
    }

    return 0;
}
