#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int s1=0;
	int a[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
		}
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
		{
			if(i==j||i+j==n-1)
			{
				s1+=a[i][j];
			}
		}
	cout<<s1<<endl;
	return 0;
}
