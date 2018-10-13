#include<bits/stdc++.h>
using namespace std;
int main(){
	int times;
	cin>>times;
	while(times-- > 0)
    {
        int panding_2 = 0;
        int n;
        cin>>n;



        int panding_3 = 1;
        for (int i = 2;i<=n/2;i++)
        {
            if (n%i == 0)
            {
                panding_3 = 0;
                break;
            }
        }
        if (panding_3 == 1)
        {
            cout<<"No"<<endl;
            continue;
        }



        for (int i = 1;i<=n/2;i++)
        {
            if (n%i == 0)
            {
                int panding_1 = 1;
                int j = n/i;
                for (int k = 2;k<=j/2;k++)
                    if (j%k == 0)
                    {
                        panding_1 = 0;
                        break;
                    }
                for (int k = 2;k<=i/2;k++)
                    if (i%k == 0)
                    {
                        panding_1 = 0;
                        break;
                    }
                if (panding_1 == 1)
                {
                    cout<<"Yes"<<endl;
                    panding_2 = 1;
                    break;
                }
            }
        }
        if (panding_2 == 0)
            cout<<"No"<<endl;
    }

	return 0;
}
