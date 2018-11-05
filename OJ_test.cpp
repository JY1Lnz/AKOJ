#include<bits/stdc++.h>
using namespace std;
int main(){
	int x1,y1,x2,y2;
	while(cin>>x1>>y1>>x2>>y2)
    {
        if (x1 == x2)
        {
            cout<<"INF"<<endl;
            continue;
        }
        int s = (y2-y1)/(x2-x1);
        cout<<s<<endl;
    }

	return 0;
}
