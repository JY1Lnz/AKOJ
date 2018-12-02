#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n;
        cin>>n;
        n = n*0.3;
        //cout<<n<<endl;
        //cout<<60-n<<endl;
        double x = (60-n)/0.7;
        //cout<<x<<endl;
        if (int(x*10)%10>5)
            printf("%d\n",int(x)+1);
        else if (int(x*10)%10>=1)
            printf("%.0f.5\n",x);
        else if (double(int(x))*0.7 == (60-n))
            printf("%.0f\n",x);
        else
            printf("%.0f.5\n",x);
    }

    return 0;
}
