#include<bits/stdc++.h>
using namespace std;
//1310
int main()
{
	int n,m;
	int sum = 0;
	cin>>n>>m;
	int data[n][n+1] = {0};
	int w = 0;
	while(m--)
	{
		int a,b;
		int n_a = 0,n_b = 0;
		int w_a = 0,w_b = 0;
		cin>>a>>b;
		
		for (int i = 0;i<sum;i++)
		{
			if (data[i][a] == 1)
			{
				n_a = 1;
				w_a = i;	
			}
			if (data[i][b] == 1)
			{
				n_b = 1;
				w_a = i;
			}
		}
		if (n_a == 0&&n_b == 0)
		{
			data[w][a] = 1;
			data[w][b] = 1;
			w++;
		}
		if (n_a == 0)
			data[w_a][a] = 1;
		if (n_b == 0)
			data[w_a][b] = 1;
		if (n_a == 0&&n_b == 0)
			sum++;
		if (n_a == 1&&n_b == 1&&w_a!=w_b)
			{
				for (int i = 1;i <= n;i++)
					if (data[w_b][i] == 1)
					{
						data[w_b][i] = 0;
						data[w_a][i] = 1;
					}
				sum--;
			}
		if (n_a == 1&&n_b == 0)
			data[w_a][b] = 1;
		if (n_a == 0&&n_b == 1)
			data[w_b][a] = 1;
	}
	cout<<sum<<endl;
	
	return 0;
}
